/*
 * Copyright (C) 2017-2019 VIA Corporation
 * Copyright (C) 2019 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include "fu-plugin.h"

#include "fu-vli-common.h"

typedef struct __attribute__ ((packed)) {
	guint32		fwver;	/* BE */
	guint16		vid;	/* LE */
	guint16		pid;	/* LE */
} FuVliUsbhubPdHdr;

#define VLI_USBHUB_PD_FLASHMAP_ADDR_LEGACY		0x4000
#define VLI_USBHUB_PD_FLASHMAP_ADDR			0x1003

guint32		 fu_vli_usbhub_pd_get_offset_for_kind	(FuVliDeviceKind	 device_kind);
FuVliDeviceKind	 fu_vli_usbhub_pd_guess_device_kind	(guint32		 fwver);
