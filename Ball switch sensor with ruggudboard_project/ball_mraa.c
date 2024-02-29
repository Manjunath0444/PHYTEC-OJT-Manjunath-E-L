#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <mraa.h>

#define GPIO_PIN 36  // Replace with the actual GPIO pin for the ball switch

void error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

int readDigitalValue(mraa_gpio_context gpio) {
    return mraa_gpio_read(gpio);
}

int main() {
    mraa_result_t status = MRAA_SUCCESS;
    mraa_gpio_context gpio;

    // Initialize MRAA
    mraa_init();

    // Initialize GPIO pin
    gpio = mraa_gpio_init(GPIO_PIN);
    if (gpio == NULL) {
        error("Error initializing GPIO pin");
    }

    // Set the GPIO pin direction to input
    status = mraa_gpio_dir(gpio, MRAA_GPIO_IN);
    if (status != MRAA_SUCCESS) {
        error("Error setting direction for GPIO pin");
    }

    while (1) {
        int ballSwitchState = readDigitalValue(gpio);

        if (ballSwitchState) {
            printf("Not Tilted=0\n");
        } else {
            printf("Tilted=1\n");
        }

        // Adjust the sleep duration based on your sensor's update rate
        sleep(1);  // Sleep for 1 second between readings
    }

    // Close and cleanup GPIO pin before exiting
    mraa_gpio_close(gpio);

    return 0;
}

