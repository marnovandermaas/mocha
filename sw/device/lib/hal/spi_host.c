// Copyright lowRISC contributors (COSMIC project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "hal/spi_host.h"
#include "hal/mmio.h"
#include <stdbool.h>
#include <stdint.h>

uint32_t spi_host_jedec_id_read(spi_host_t spi_host)
{
    set_cs(true);
    spi->blocking_write(&CmdReadJEDECId, 1);
    spi->blocking_read(jedec_id_out, 3);
    set_cs(false);
}

void spi_host_init(spi_host_t spi_host
    const bool     ClockPolarity,
    const bool     ClockPhase,
    const bool     MsbFirst,
    const uint16_t HalfClockPeriod
) {
  configuration =
    (ClockPolarity ? ConfigurationClockPolarity : 0) |
    (ClockPhase ? ConfigurationClockPhase : 0) |
    (MsbFirst ? ConfigurationMSBFirst : 0) |
    (HalfClockPeriod & ConfigurationHalfClockPeriodMask);

  control =
    ControlTransmitClear | ControlSoftwareReset | ControlReceiveClear;
}
}
