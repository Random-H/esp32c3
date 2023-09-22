/*
 * @Author: lmh 885288596@qq.com
 * @Date: 2023-04-28 21:50:05
 * @LastEditors: lmh 885288596@qq.com
 * @LastEditTime: 2023-05-13 19:56:19
 * @FilePath: /st7789/main/main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_timer.h"
#include "esp_log.h"
#include "../components/user_dev/SPI/User_dev_spi.h"
#include "../components/user_dev/TOUCH/touch_iic.h"
#include "../components/user_mid/lcd.h"
#include "../components/lvgl/lvgl.h"
#include "../components/lvgl/lvgl_driver/lv_port_disp.h"
#include "../components/ui/ui.h"


static esp_timer_handle_t lvgl_timer_handle = NULL;


static IRAM_ATTR void lv_timer_cb(void *arg)
{
   lv_tick_inc(1);
}

static esp_timer_create_args_t lvgl_timer = {
    .callback = &lv_timer_cb,
    .arg = NULL,
    .name = "lvgl_timer",
    .dispatch_method = ESP_TIMER_TASK};

esp_err_t _lv_timer_create(void)
{
   esp_err_t err = esp_timer_create(&lvgl_timer, &lvgl_timer_handle);
   err = esp_timer_start_periodic(lvgl_timer_handle, 1000); // 1毫秒回调
   if (err != ESP_OK)
   {
      ESP_LOGE("main", "lvgl定时器创建成功\r\n");
   }
   return err;
}

void app_main(void)
{

   lv_init();
   lv_port_disp_init();
   _lv_timer_create();
   touch_iic_init();
   ui_init();
   while (true)
   {
      //printf("dss:%d",cst816t_read_len(0x15,0,1));
      vTaskDelay(10 / portTICK_PERIOD_MS);
      lv_task_handler();
   }
}

