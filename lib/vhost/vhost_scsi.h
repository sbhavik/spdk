/*-
 *   BSD LICENSE
 *
 *   Copyright (c) Intel Corporation.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Intel Corporation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SPDK_VHOST_SCSI_H
#define SPDK_VHOST_SCSI_H

#include "spdk/scsi_spec.h"

#define SPDK_VHOST_SCSI_CTRLR_MAX_DEVS 8

struct spdk_vhost_scsi_dev;

int spdk_vhost_scsi_controller_construct(void);
int spdk_vhost_scsi_dev_construct(const char *name, uint64_t cpumask);
int spdk_vhost_scsi_dev_remove(struct spdk_vhost_scsi_dev *vdev);
struct spdk_scsi_dev *spdk_vhost_scsi_dev_get_dev(struct spdk_vhost_scsi_dev *ctrl,
		uint8_t num);
int spdk_vhost_scsi_dev_add_dev(const char *name, unsigned scsi_dev_num, const char *lun_name);
int spdk_vhost_scsi_dev_remove_dev(struct spdk_vhost_scsi_dev *vdev, unsigned scsi_dev_num);

#endif /* SPDK_VHOST_SCSI_H */