/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_PCIE_AUX_REGS_H_
#define ASIC_REG_PCIE_AUX_REGS_H_

/*
 *****************************************
 *   PCIE_AUX
 *   (Prototype: PCIE_AUX)
 *****************************************
 */

#define mmPCIE_AUX_APB_TIMEOUT 0x4C07004

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_0 0x4C07008

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_1 0x4C0700C

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_2 0x4C07010

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_3 0x4C07014

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_4 0x4C07018

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_5 0x4C0701C

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_6 0x4C07020

#define mmPCIE_AUX_SW_GENERAL_PURPOSE_7 0x4C07024

#define mmPCIE_AUX_PHY_INIT 0x4C07100

#define mmPCIE_AUX_LTR_MAX_LATENCY 0x4C07138

#define mmPCIE_AUX_BAR0_START_L 0x4C07160

#define mmPCIE_AUX_BAR0_START_H 0x4C07164

#define mmPCIE_AUX_BAR1_START 0x4C07168

#define mmPCIE_AUX_BAR2_START_L 0x4C0716C

#define mmPCIE_AUX_BAR2_START_H 0x4C07170

#define mmPCIE_AUX_BAR3_START 0x4C07174

#define mmPCIE_AUX_BAR4_START_L 0x4C07178

#define mmPCIE_AUX_BAR4_START_H 0x4C0717C

#define mmPCIE_AUX_BAR5_START 0x4C07180

#define mmPCIE_AUX_BAR0_LIMIT_L 0x4C07184

#define mmPCIE_AUX_BAR0_LIMIT_H 0x4C07188

#define mmPCIE_AUX_BAR1_LIMIT 0x4C0718C

#define mmPCIE_AUX_BAR2_LIMIT_L 0x4C07190

#define mmPCIE_AUX_BAR2_LIMIT_H 0x4C07194

#define mmPCIE_AUX_BAR3_LIMIT 0x4C07198

#define mmPCIE_AUX_BAR4_LIMIT_L 0x4C0719C

#define mmPCIE_AUX_BAR4_LIMIT_H 0x4C07200

#define mmPCIE_AUX_BAR5_LIMIT 0x4C07204

#define mmPCIE_AUX_BUS_MASTER_EN 0x4C07208

#define mmPCIE_AUX_MEM_SPACE_EN 0x4C0720C

#define mmPCIE_AUX_MAX_RD_REQ_SIZE 0x4C07210

#define mmPCIE_AUX_MAX_PAYLOAD_SIZE 0x4C07214

#define mmPCIE_AUX_EXT_TAG_EN 0x4C07218

#define mmPCIE_AUX_RCB 0x4C0721C

#define mmPCIE_AUX_PM_NO_SOFT_RST 0x4C07220

#define mmPCIE_AUX_PBUS_NUM 0x4C07224

#define mmPCIE_AUX_PBUS_DEV_NUM 0x4C07228

#define mmPCIE_AUX_NO_SNOOP_EN 0x4C0722C

#define mmPCIE_AUX_RELAX_ORDER_EN 0x4C07230

#define mmPCIE_AUX_HP_SLOT_CTRL_ACCESS 0x4C07234

#define mmPCIE_AUX_DLL_STATE_CHGED_EN 0x4C07238

#define mmPCIE_AUX_CMP_CPLED_INT_EN 0x4C0723C

#define mmPCIE_AUX_HP_INT_EN 0x4C07340

#define mmPCIE_AUX_PRE_DET_CHGEN_EN 0x4C07344

#define mmPCIE_AUX_MRL_SENSOR_CHGED_EN 0x4C07348

#define mmPCIE_AUX_PWR_FAULT_DET_EN 0x4C0734C

#define mmPCIE_AUX_ATTEN_BUTTON_PRESSED_EN 0x4C07350

#define mmPCIE_AUX_PF_FLR_ACTIVE 0x4C07360

#define mmPCIE_AUX_PF_FLR_DONE 0x4C07364

#define mmPCIE_AUX_FLR_INT 0x4C07390

#define mmPCIE_AUX_FLR_CTRL 0x4C07394

#define mmPCIE_AUX_LTR_M_EN 0x4C073B0

#define mmPCIE_AUX_LTSSM_EN 0x4C07428

#define mmPCIE_AUX_SYS_INTR 0x4C07440

#define mmPCIE_AUX_INT_DISABLE 0x4C07444

#define mmPCIE_AUX_SMLH_LINK_UP 0x4C07448

#define mmPCIE_AUX_PM_CURR_STATE 0x4C07450

#define mmPCIE_AUX_RDLH_LINK_UP 0x4C07458

#define mmPCIE_AUX_BRDG_SLV_XFER_PENDING 0x4C0745C

#define mmPCIE_AUX_BRDG_DBI_XFER_PENDING 0x4C07460

#define mmPCIE_AUX_AUTO_SP_DIS 0x4C07478

#define mmPCIE_AUX_DBI 0x4C07490

#define mmPCIE_AUX_DBI_32 0x4C07494

#define mmPCIE_AUX_DIAG_STATUS_BUS_0 0x4C074A4

#define mmPCIE_AUX_DIAG_STATUS_BUS_1 0x4C074A8

#define mmPCIE_AUX_DIAG_STATUS_BUS_2 0x4C074AC

#define mmPCIE_AUX_DIAG_STATUS_BUS_3 0x4C074B0

#define mmPCIE_AUX_DIAG_STATUS_BUS_4 0x4C074B4

#define mmPCIE_AUX_DIAG_STATUS_BUS_5 0x4C074B8

#define mmPCIE_AUX_DIAG_STATUS_BUS_6 0x4C074BC

#define mmPCIE_AUX_DIAG_STATUS_BUS_7 0x4C074C0

#define mmPCIE_AUX_DIAG_STATUS_BUS_8 0x4C074C4

#define mmPCIE_AUX_DIAG_STATUS_BUS_9 0x4C074C8

#define mmPCIE_AUX_DIAG_STATUS_BUS_10 0x4C074CC

#define mmPCIE_AUX_DIAG_STATUS_BUS_11 0x4C074D0

#define mmPCIE_AUX_DIAG_STATUS_BUS_12 0x4C074D4

#define mmPCIE_AUX_DIAG_STATUS_BUS_13 0x4C074D8

#define mmPCIE_AUX_DIAG_STATUS_BUS_14 0x4C074DC

#define mmPCIE_AUX_DIAG_STATUS_BUS_15 0x4C074E0

#define mmPCIE_AUX_DIAG_STATUS_BUS_16 0x4C074E4

#define mmPCIE_AUX_DIAG_STATUS_BUS_17 0x4C074E8

#define mmPCIE_AUX_DIAG_STATUS_BUS_18 0x4C074EC

#define mmPCIE_AUX_DIAG_STATUS_BUS_19 0x4C074F0

#define mmPCIE_AUX_DIAG_STATUS_BUS_20 0x4C074F4

#define mmPCIE_AUX_DIAG_STATUS_BUS_21 0x4C074F8

#define mmPCIE_AUX_DIAG_STATUS_BUS_22 0x4C074FC

#define mmPCIE_AUX_DIAG_STATUS_BUS_23 0x4C07500

#define mmPCIE_AUX_DIAG_STATUS_BUS_24 0x4C07504

#define mmPCIE_AUX_DIAG_STATUS_BUS_25 0x4C07508

#define mmPCIE_AUX_DIAG_STATUS_BUS_26 0x4C0750C

#define mmPCIE_AUX_DIAG_STATUS_BUS_27 0x4C07510

#define mmPCIE_AUX_DIAG_STATUS_BUS_28 0x4C07514

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_0 0x4C07640

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_1 0x4C07644

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_2 0x4C07648

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_3 0x4C0764C

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_4 0x4C07650

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_5 0x4C07654

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_6 0x4C07658

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_7 0x4C0765C

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_8 0x4C07660

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_9 0x4C07664

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_10 0x4C07668

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_11 0x4C0766C

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_12 0x4C07670

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_13 0x4C07674

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_14 0x4C07678

#define mmPCIE_AUX_CDM_RAS_DES_EC_INFO_15 0x4C0767C

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_0 0x4C07744

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_1 0x4C07748

#define mmPCIE_AUX_CDM_RAS_DES_SD_COMMON_2 0x4C0774C

#define mmPCIE_AUX_APP_RAS_DES_TBA_CTRL 0x4C07774

#define mmPCIE_AUX_PM_MASTER_STATE 0x4C07838

#define mmPCIE_AUX_PM_SLAVE_STATE 0x4C0783C

#define mmPCIE_AUX_PM_DSTATE 0x4C07840

#define mmPCIE_AUX_PM_PME_EN 0x4C07844

#define mmPCIE_AUX_PM_LINKST_IN_L0S 0x4C07848

#define mmPCIE_AUX_PM_LINKST_IN_L1 0x4C0784C

#define mmPCIE_AUX_PM_LINKST_IN_L2 0x4C07850

#define mmPCIE_AUX_PM_LINKST_L2_EXIT 0x4C07854

#define mmPCIE_AUX_PM_STATUS 0x4C07858

#define mmPCIE_AUX_APP_READY_ENTER_L23 0x4C0785C

#define mmPCIE_AUX_APP_XFER_PENDING 0x4C07860

#define mmPCIE_AUX_APP_REQ_L1 0x4C07930

#define mmPCIE_AUX_AUX_PM_EN 0x4C07934

#define mmPCIE_AUX_APPS_PM_XMT_PME 0x4C07938

#define mmPCIE_AUX_OUTBAND_PWRUP_CMD 0x4C07940

#define mmPCIE_AUX_PERST 0x4C079B8

#define mmPCIE_AUX_DBI_RO_WR_DISABLE 0x4C079BC

#define mmPCIE_AUX_HOLD_PHY_RST 0x4C079C0

#define mmPCIE_AUX_TLP_INTERNAL_ERR_REP 0x4C079C4

#define mmPCIE_AUX_APP_SRIS_MODE 0x4C079C8

#define mmPCIE_AUX_BUS_MSTR_EN_CLR_INTR 0x4C079CC

#define mmPCIE_AUX_BUS_MSTR_EN_CLR_INTR_MASK 0x4C079D0

#endif /* ASIC_REG_PCIE_AUX_REGS_H_ */
