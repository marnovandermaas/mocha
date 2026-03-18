// Copyright lowRISC contributors (COSMIC project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "hal/mmio.h"
#include <stdbool.h>
#include <stdint.h>

#define SPI_HOST_INTR_STATE_REG                (0x0)
#define SPI_HOST_INTR_ENABLE_REG               (0x4)
#define SPI_HOST_INTR_TEST_REG                 (0x8)
#define SPI_HOST_CONTROL_REG         (0x10)
#define SPI_HOST_STATUS_REG (0x14)
#define SPI_HOST_CONFIGOPTS_REG (0x18)
#define SPI_HOST_CSID_REG (0x1C)
#define SPI_HOST_COMMAND_REG (0x20)
#define SPI_HOST_RXDATA_REG (0x24)
#define SPI_HOST_TXDATA_REG (0x28)

typedef void *spi_host_t;

uint32_t spi_host_jedec_id_get(spi_host_t spi_host);
void spi_host_init(spi_host_t spi_host);
