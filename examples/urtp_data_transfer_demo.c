/*
 * Copyright (c) 2025, Guangzhou Zhongyue Xin Electronic Technology Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Author: Luo Silin (luosilin@gzzyxtek.com).
 */

#include <getopt.h>
#include <string.h>
#include <rtthread.h>

#include "urtp.h"
#include "urtp_conf.h"



static int urtp_send_data(void)
{

    return 0;
}
MSH_CMD_EXPORT(urtp_send_data, Send data to the URTP receiving end.);

static int urtp_recv_data(void)
{

    return 0;
}
MSH_CMD_EXPORT(urtp_recv_data, Receive data from the sending end of the URTP.);
