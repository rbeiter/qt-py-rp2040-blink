#include "pico/stdio.h"
#include "pico/stdlib.h"

#define PIN_D0 29

void main() {
	stdio_init_all();

  gpio_init(PIN_D0);
  gpio_set_dir(PIN_D0, GPIO_OUT);
  gpio_put(PIN_D0, 1);

  while (true) {
    gpio_put(PIN_D0, (gpio_get(PIN_D0) ? 0 : 1));

    sleep_ms(1000);
  }
}
