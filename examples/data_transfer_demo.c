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

static const char sopts[] = "p:h";
static const struct option lopts[] = {
    {"model",      optional_argument,  NULL, 'm'},
    {"length",     optional_argument,  NULL, 'l'},
    {"help",       no_argument,        NULL, 'h'},
    {0, 0, 0}
};

static void data_transfer_usage(void)
{

}

static void data_transfer_demo(int argc, char *argv[])
{
    int c = 0;

    while ((c = getopt_long(argc, argv, sopts, lopts, NULL)) != -1) {
        switch (c) {
        case 'm':
            break;
        case 'l':
            break;
        case 'h':
            break;
        default:

            return 0;
        }
    }
}
MSH_CMD_EXPORT_ALIAS(data_transfer_demo, data_transfer, An example of using URTP for data transmission.);