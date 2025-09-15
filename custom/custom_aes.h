#pragma once

// Tell mbedTLS to use the ESP-IDF configuration
#define MBEDTLS_CONFIG_FILE "mbedtls/esp_config.h"
#include "mbedtls/aes.h"
