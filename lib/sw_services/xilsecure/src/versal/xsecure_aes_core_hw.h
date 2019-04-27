/******************************************************************************
*
* Copyright (C) 2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
*******************************************************************************/
/*****************************************************************************/
/**
*
* @file xsecure_aes_hw.h
* This file contains AES core hardware definitions of versal.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date        Changes
* ----- ---- -------- -------------------------------------------------------
* 4.0   vns  03/21/19 Initial release
*
* </pre>
*
* @endcond
******************************************************************************/

#ifndef XSECURE_AES_HW_H
#define XSECURE_AES_HW_H

#ifdef __cplusplus
extern "C" {
#endif
/***************************** Include Files *********************************/

/************************** Constant Definitions ****************************/
/**
 * AES Base Address
 */
#define XSECURE_AES_BASEADDR				(0xF11E0000U)

/**
 * Register: XSECURE_AES_STATUS
 */
#define XSECURE_AES_STATUS_OFFSET			(0x00000000 )

#define XSECURE_AES_STATUS_CM_ENABLED_SHIFT		(12U)
#define XSECURE_AES_STATUS_CM_ENABLED_MASK		(0x00001000U)

#define XSECURE_AES_STATUS_BLK_KEY_DEC_DONE_SHIFT	(5U)
#define XSECURE_AES_STATUS_BLK_KEY_DEC_DONE_MASK	(0x00000020U)

#define XSECURE_AES_STATUS_KEY_INIT_DONE_SHIFT		(4U)
#define XSECURE_AES_STATUS_KEY_INIT_DONE_MASK		(0x00000010U)

#define XSECURE_AES_STATUS_GCM_TAG_PASS_SHIFT		(3U)
#define XSECURE_AES_STATUS_GCM_TAG_PASS_MASK		(0x00000008U)

#define XSECURE_AES_STATUS_DONE_SHIFT			(2U)
#define XSECURE_AES_STATUS_DONE_MASK			(0x00000004U)

#define XSECURE_AES_STATUS_READY_SHIFT			(1U)
#define XSECURE_AES_STATUS_READY_MASK			(0x00000002)

#define XSECURE_AES_STATUS_BUSY_MASK			(0x00000001U)

/**
 * Register: XSECURE_AES_KEY_SEL
 */
#define XSECURE_AES_KEY_SEL_OFFSET			(0x00000004U)

/**
 * Register: XSECURE_AES_KEY_LOAD
 */
#define XSECURE_AES_KEY_LOAD_OFFSET			(0x00000008U)

#define XSECURE_AES_KEY_LOAD_VAL_MASK			(0x00000001U)

/**
 * Register: XSECURE_AES_START_MSG
 */
#define XSECURE_AES_START_MSG_OFFSET			(0x0000000CU)
#define XSECURE_AES_START_MSG_VAL_MASK			(0x00000001U)

/**
 * Register: XSECURE_AES_SOFT_RST
 */
#define XSECURE_AES_SOFT_RST_OFFSET			(0x00000010U)

/**
 * Register: XSECURE_AES_KEY_CLEAR
 */
#define XSECURE_AES_KEY_CLEAR_OFFSET			(0x00000014U)

#define XSECURE_AES_KEY_CLEAR_RESERVED_2_SHIFT		(22U)
#define XSECURE_AES_KEY_CLEAR_RESERVED_2_MASK		(0xFFC00000U)

#define XSECURE_AES_KEY_CLEAR_PUF_KEY_SHIFT		(21U)
#define XSECURE_AES_KEY_CLEAR_PUF_KEY_MASK		(0x00200000U)

#define XSECURE_AES_KEY_CLEAR_BBRAM_RED_KEY_SHIFT	(20U)
#define XSECURE_AES_KEY_CLEAR_BBRAM_RED_KEY_MASK	(0x00100000U)

#define XSECURE_AES_KEY_CLEAR_BH_RED_KEY_SHIFT		(19U)
#define XSECURE_AES_KEY_CLEAR_BH_RED_KEY_MASK		(0x00080000U)

#define XSECURE_AES_KEY_CLEAR_BH_KEY_SHIFT		(18U)
#define XSECURE_AES_KEY_CLEAR_BH_KEY_MASK		(0x00040000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_RED_KEY_1_SHIFT (17U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_RED_KEY_1_MASK	(0x00020000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_RED_KEY_0_SHIFT	(16U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_RED_KEY_0_MASK	(0x00010000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_RED_KEY_SHIFT	(15U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_RED_KEY_MASK	(0x00008000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_KEY_1_SHIFT	(14U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_KEY_1_MASK	(0x00004000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_KEY_0_SHIFT	(13U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_USER_KEY_0_MASK	(0x00002000U)

#define XSECURE_AES_KEY_CLEAR_EFUSE_KEY_SHIFT		(12U)
#define XSECURE_AES_KEY_CLEAR_EFUSE_KEY_MASK		(0x00001000U)

#define XSECURE_AES_KEY_CLEAR_USER_KEY_7_SHIFT   11
#define XSECURE_AES_KEY_CLEAR_USER_KEY_7_MASK    0x00000800

#define XSECURE_AES_KEY_CLEAR_USER_KEY_6_SHIFT   10
#define XSECURE_AES_KEY_CLEAR_USER_KEY_6_MASK    0x00000400

#define XSECURE_AES_KEY_CLEAR_USER_KEY_5_SHIFT   9
#define XSECURE_AES_KEY_CLEAR_USER_KEY_5_MASK    0x00000200

#define XSECURE_AES_KEY_CLEAR_USER_KEY_4_SHIFT   8
#define XSECURE_AES_KEY_CLEAR_USER_KEY_4_MASK    0x00000100

#define XSECURE_AES_KEY_CLEAR_USER_KEY_3_SHIFT   7
#define XSECURE_AES_KEY_CLEAR_USER_KEY_3_MASK    0x00000080

#define XSECURE_AES_KEY_CLEAR_USER_KEY_2_SHIFT   6
#define XSECURE_AES_KEY_CLEAR_USER_KEY_2_MASK    0x00000040

#define XSECURE_AES_KEY_CLEAR_USER_KEY_1_SHIFT   5
#define XSECURE_AES_KEY_CLEAR_USER_KEY_1_MASK    0x00000020

#define XSECURE_AES_KEY_CLEAR_USER_KEY_0_SHIFT   4
#define XSECURE_AES_KEY_CLEAR_USER_KEY_0_MASK    0x00000010

#define XSECURE_AES_KEY_CLEAR_RESERVED_1_SHIFT   2
#define XSECURE_AES_KEY_CLEAR_RESERVED_1_MASK    0x0000000C

#define XSECURE_AES_KEY_CLEAR_KUP_KEY_SHIFT   1
#define XSECURE_AES_KEY_CLEAR_KUP_KEY_MASK    0x00000002

#define XSECURE_AES_KEY_CLEAR_AES_KEY_ZEROIZE_SHIFT   0
#define XSECURE_AES_KEY_CLEAR_AES_KEY_ZEROIZE_MASK    0x00000001

/**
 * Register: XSECURE_AES_MODE
 */
#define XSECURE_AES_MODE_OFFSET    (0x00000018 )

#define XSECURE_AES_MODE_ENC_DEC_N_MASK    0x00000001

/**
 * Register: XSECURE_AES_KUP_WR
 */
#define XSECURE_AES_KUP_WR_OFFSET    (0x0000001C )

#define XSECURE_AES_KUP_WR_IV_SAVE_SHIFT   1
#define XSECURE_AES_KUP_WR_IV_SAVE_MASK    0x00000002

#define XSECURE_AES_KUP_WR_KEY_SAVE_SHIFT   0
#define XSECURE_AES_KUP_WR_KEY_SAVE_MASK    0x00000001

/**
 * Register: XSECURE_AES_IV_0
 */
#define XSECURE_AES_IV_0_OFFSET    (0x00000040 )

#define XSECURE_AES_IV_0_VAL_MASK    0xFFFFFFFF

/**
 * Register: XSECURE_AES_IV_1
 */
#define XSECURE_AES_IV_1_OFFSET    (0x00000044 )

/**
 * Register: XSECURE_AES_IV_2
 */
#define XSECURE_AES_IV_2_OFFSET    (0x00000048 )

/**
 * Register: XSECURE_AES_IV_3
 */
#define XSECURE_AES_IV_3_OFFSET    (0x0000004C )

/**
 * Register: XSECURE_AES_KEY_SIZE
 */
#define XSECURE_AES_KEY_SIZE_OFFSET    (0x00000050 )

#define XSECURE_AES_KEY_SIZE_VAL_MASK    0x00000003

/**
 * Register: XSECURE_AES_KEY_DEC
 */
#define XSECURE_AES_KEY_DEC_OFFSET    (0x00000058 )

/**
 * Register: XSECURE_AES_KEY_DEC_TRIG
 */
#define XSECURE_AES_KEY_DEC_TRIG_OFFSET    (0x0000005C )

#define XSECURE_AES_KEY_DEC_TRIG_VAL_MASK    0x00000001

/**
 * Register: XSECURE_AES_KEY_DEC_SEL
 */
#define XSECURE_AES_KEY_DEC_SEL_OFFSET    (0x00000060 )

#define XSECURE_AES_KEY_DEC_SEL_VAL_MASK    0x00000007

/**
 * Register: XSECURE_AES_KEY_ZEROED_STATUS
 */
#define XSECURE_AES_KEY_ZEROED_STATUS_OFFSET    (0x00000064 )

#define XSECURE_AES_KEY_ZEROED_STATUS_RESERVED_2_SHIFT   22
#define XSECURE_AES_KEY_ZEROED_STATUS_RESERVED_2_MASK    0xFFC00000

#define XSECURE_AES_KEY_ZEROED_STATUS_PUF_KEY_SHIFT   21
#define XSECURE_AES_KEY_ZEROED_STATUS_PUF_KEY_MASK    0x00200000

#define XSECURE_AES_KEY_ZEROED_STATUS_BBRAM_RED_KEY_SHIFT   20
#define XSECURE_AES_KEY_ZEROED_STATUS_BBRAM_RED_KEY_MASK    0x00100000

#define XSECURE_AES_KEY_ZEROED_STATUS_BH_RED_KEY_SHIFT   19
#define XSECURE_AES_KEY_ZEROED_STATUS_BH_RED_KEY_MASK    0x00080000

#define XSECURE_AES_KEY_ZEROED_STATUS_BH_KEY_SHIFT   18
#define XSECURE_AES_KEY_ZEROED_STATUS_BH_KEY_MASK    0x00040000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_RED_KEY_1_SHIFT   17
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_RED_KEY_1_MASK    0x00020000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_RED_KEY_0_SHIFT   16
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_RED_KEY_0_MASK    0x00010000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_RED_KEY_SHIFT   15
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_RED_KEY_MASK    0x00008000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_KEY_1_SHIFT   14
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_KEY_1_MASK    0x00004000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_KEY_0_SHIFT   13
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_USER_KEY_0_MASK    0x00002000

#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_KEY_SHIFT   12
#define XSECURE_AES_KEY_ZEROED_STATUS_EFUSE_KEY_MASK    0x00001000

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_7_SHIFT   11
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_7_MASK    0x00000800

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_6_SHIFT   10
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_6_MASK    0x00000400

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_5_SHIFT   9
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_5_MASK    0x00000200

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_4_SHIFT   8
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_4_MASK    0x00000100

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_3_SHIFT   7
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_3_MASK    0x00000080

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_2_SHIFT   6
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_2_MASK    0x00000040

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_1_SHIFT   5
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_1_MASK    0x00000020

#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_0_SHIFT   4
#define XSECURE_AES_KEY_ZEROED_STATUS_USER_KEY_0_MASK    0x00000010

#define XSECURE_AES_KEY_ZEROED_STATUS_RESERVED_1_SHIFT   2
#define XSECURE_AES_KEY_ZEROED_STATUS_RESERVED_1_MASK    0x0000000C

#define XSECURE_AES_KEY_ZEROED_STATUS_KUP_KEY_SHIFT   1
#define XSECURE_AES_KEY_ZEROED_STATUS_KUP_KEY_MASK    0x00000002

#define XSECURE_AES_KEY_ZEROED_STATUS_AES_KEY_ZEROED_SHIFT   0
#define XSECURE_AES_KEY_ZEROED_STATUS_AES_KEY_ZEROED_MASK    0x00000001

/**
 * Register: XSECURE_AES_KEY_LOCK_STATUS
 */
#define XSECURE_AES_KEY_LOCK_STATUS_OFFSET    (0x00000068 )

#define XSECURE_AES_KEY_LOCK_STATUS_BBRAM_MASK    0x00000002
#define XSECURE_AES_KEY_LOCK_STATUS_EFUSE_MASK    0x00000001

/**
 * Register: XSECURE_AES_AAD
 */
#define XSECURE_AES_AAD_OFFSET    (0x0000006C )

#define XSECURE_AES_AAD_HDR_PAYLOAD_N_SHIFT   0
#define XSECURE_AES_AAD_HDR_PAYLOAD_N_WIDTH   1
#define XSECURE_AES_AAD_HDR_PAYLOAD_N_MASK    0x00000001

/**
 * Register: XSECURE_AES_USER_SEL
 */
#define XSECURE_AES_USER_SEL_OFFSET    (0x00000070 )

#define XSECURE_AES_USER_SEL_VAL_SHIFT   0
#define XSECURE_AES_USER_SEL_VAL_WIDTH   3
#define XSECURE_AES_USER_SEL_VAL_MASK    0x00000007

/**
 * Register: XSECURE_AES_USER_KEY_CRC
 */
#define XSECURE_AES_USER_KEY_CRC    (0x00000074 )

#define XSECURE_AES_USER_KEY_CRC_VAL_SHIFT   0
#define XSECURE_AES_USER_KEY_CRC_VAL_WIDTH   32
#define XSECURE_AES_USER_KEY_CRC_VAL_MASK    0xFFFFFFFF

/**
 * Register: XSECURE_AES_USER_KEY_CRC_STATUS
 */
#define XSECURE_AES_USER_KEY_CRC_STATUS    (0x00000078 )

#define XSECURE_AES_USER_KEY_CRC_STATUS_DONE_SHIFT   1
#define XSECURE_AES_USER_KEY_CRC_STATUS_DONE_WIDTH   1
#define XSECURE_AES_USER_KEY_CRC_STATUS_DONE_MASK    0x00000002

#define XSECURE_AES_USER_KEY_CRC_STATUS_PASS_SHIFT   0
#define XSECURE_AES_USER_KEY_CRC_STATUS_PASS_WIDTH   1
#define XSECURE_AES_USER_KEY_CRC_STATUS_PASS_MASK    0x00000001

/**
 * Register: XSECURE_AES_CM_EN
 */
#define XSECURE_AES_CM_EN_OFFSET    (0x0000007C )

#define XSECURE_AES_CM_EN_VAL_MASK    0x00000001

/**
 * Register: XSECURE_AES_SPLIT_CFG
 */
#define XSECURE_AES_SPLIT_CFG_OFFSET    (0x00000080 )

#define XSECURE_AES_SPLIT_CFG_KEY_SPLIT_SHIFT   1
#define XSECURE_AES_SPLIT_CFG_KEY_SPLIT_MASK    0x00000002

#define XSECURE_AES_SPLIT_CFG_DATA_SPLIT_SHIFT   0
#define XSECURE_AES_SPLIT_CFG_DATA_SPLIT_MASK    0x00000001

/**
 * Register: XSECURE_AES_DATA_SWAP
 */
#define XSECURE_AES_DATA_SWAP_OFFSET    (0x00000084 )
#define XSECURE_AES_DATA_SWAP_VAL_MASK    0x00000001

/**
 * Register: AES_BH_KEY_0
 */
#define XSECURE_AES_BH_KEY_0_OFFSET    (0x000000F0 )

/**
 * Register: AES_USER_KEY_0_0
 */
#define XSECURE_AES_USER_KEY_0_0_OFFSET    (0x00000110 )

/**
 * Register: AES_USER_KEY_1_0
 */
#define XSECURE_AES_USER_KEY_1_0_OFFSET    (0x00000130 )

/**
 * Register: AES_USER_KEY_2_0
 */
#define XSECURE_AES_USER_KEY_2_0_OFFSET    (0x00000150 )

/**
 * Register: AES_USER_KEY_3_0
 */
#define XSECURE_AES_USER_KEY_3_0_OFFSET    (0x00000170 )

/**
 * Register: AES_USER_KEY_4_0
 */
#define XSECURE_AES_USER_KEY_4_0_OFFSET    (0x00000190 )

/**
 * Register: AES_USER_KEY_5_0
 */
#define XSECURE_AES_USER_KEY_5_0_OFFSET    (0x000001B0 )
/**
 * Register: AES_USER_KEY_6_0
 */
#define XSECURE_AES_USER_KEY_6_0_OFFSET    (0x000001D0 )

/**
 * Register: XSECURE_AES_USER_KEY_7_0
 */
#define XSECURE_AES_USER_KEY_7_0_OFFSET    (0x000001F0 )

/**
 * Register: XSECURE_AES_ECO
 */
#define XSECURE_AES_ECO_OFFSET    (0x00000230 )


#ifdef __cplusplus
}
#endif


#endif /* XSECURE_AES_HW_H */
