/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/gpio.h>
#include <variant.h>

static const struct pad_config gpio_table[] = {
/* GPP_A14   GPIO                 0x0000002644000300 */ PAD_NC(GPP_A14, NONE),
/* GPP_A16   GPIO                 0x0000002444000300 */ PAD_NC(GPP_A16, DN_20K),
/* GPP_B8    GPIO                 0x0000003844000300 */ PAD_NC(GPP_B8, NONE),
/* GPP_B14   SPKR                 0x0000003e44000600 */ PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1),
/* GPP_B18   GPIO                 0x0000004244000300 */ PAD_NC(GPP_B18, NONE),
/* GPP_B22   GPIO                 0x0000004644000300 */ PAD_NC(GPP_B22, NONE),
/* GPP_C2    GPIO                 0x0000004a44000300 */ PAD_NC(GPP_C2, NONE),
/* GPP_C5    GPIO                 0x0000004d44000300 */ PAD_NC(GPP_C5, NONE),
/* GPP_C6    SML1CLK              0x0000004e44000703 */ PAD_CFG_NF(GPP_C6, NONE, DEEP, NF1),
/* GPP_C7    SML1DATA             0x0000004f44000703 */ PAD_CFG_NF(GPP_C7, NONE, DEEP, NF1),
/* GPP_C8    UART0A_RXD           0x0000005044000702 */ PAD_CFG_NF(GPP_C8, NONE, DEEP, NF1),
/* GPP_C9    UART0A_TXD           0x0000005144000700 */ PAD_CFG_NF(GPP_C9, NONE, DEEP, NF1),
/* GPP_C10   UART0A_RTS#          0x0000005244000700 */ PAD_CFG_NF(GPP_C10, NONE, DEEP, NF1),
/* GPP_C11   UART0A_CTS#          0x0000005344000702 */ PAD_CFG_NF(GPP_C11, NONE, DEEP, NF1),
/* GPP_C12   GPIO                 0x0000005444000102 */ PAD_CFG_GPI(GPP_C12, NONE, DEEP),
/* GPP_C13   GPIO                 0x0000005544000102 */ PAD_CFG_GPI(GPP_C13, NONE, DEEP),
/* GPP_C14   GPIO                 0x0000005644000102 */ PAD_CFG_GPI(GPP_C14, NONE, DEEP),
/* GPP_C15   GPIO                 0x0000005744000100 */ PAD_CFG_GPI(GPP_C15, NONE, DEEP),
/* GPP_C16   I2C0_SDA             0x0000005844000402 */ PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
/* GPP_C17   I2C0_SCL             0x0000005944000602 */ PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
/* GPP_C20   UART2_RXD            0x0000005c44000500 */ PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
/* GPP_C21   UART2_TXD            0x0000005d44000600 */ PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
/* GPP_C22   UART2_RTS#           0x0000005e44000500 */ PAD_CFG_NF(GPP_C22, NONE, DEEP, NF1),
/* GPP_C23   UART2_CTS#           0x0000005f44000502 */ PAD_CFG_NF(GPP_C23, NONE, DEEP, NF1),
/* GPP_D1    GPIO                 0x0000006144000102 */ PAD_CFG_GPI(GPP_D1, NONE, DEEP),
/* GPP_D2    GPIO                 0x0000006244800102 */ PAD_CFG_GPI(GPP_D2, NONE, DEEP),
/* GPP_D3    GPIO                 0x0000006344000201 */ PAD_CFG_GPO(GPP_D3, 1, DEEP),
/* GPP_D7    GPIO                 0x0000006784000102 */ PAD_CFG_GPI(GPP_D7, NONE, PLTRST),
/* GPP_D8    GPIO                 0x0000006884000100 */ PAD_CFG_GPI(GPP_D8, NONE, PLTRST),
/* GPP_D17   DMIC_CLK1            0x0000007144000700 */ PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1),
/* GPP_D18   DMIC_DATA1           0x0000007244000700 */ PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),
/* GPP_D19   DMIC_CLK0            0x0000007344000700 */ PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1),
/* GPP_D20   DMIC_DATA0           0x0000007444000700 */ PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
/* GPP_D21   GPIO                 0x0000007544000300 */ PAD_NC(GPP_D21, NONE),
/* GPP_D22   GPIO                 0x0000007644000300 */ PAD_NC(GPP_D22, NONE),
/* GPP_G1    GPIO                 0x0000006d44000300 */ PAD_NC(GPP_G1, NONE),
/* GPP_G2    GPIO                 0x0000006e44000300 */ PAD_NC(GPP_G2, NONE),
/* GPP_G3    GPIO                 0x0000006f40880102 */ PAD_CFG_GPI_APIC(GPP_G3, NONE, DEEP, LEVEL, INVERT),
/* I2S1_SFRM GPIO                 0x0000000040000300 */ PAD_NC(I2S1_SFRM, NONE),
/* I2S1_TXD  GPIO                 0x0000000040000300 */ PAD_NC(I2S1_TXD, NONE),
/* GPD0      BATLOW#              0x0000006044000702 */ PAD_CFG_NF(GPD0, NONE, DEEP, NF1),
/* GPD1      ACPRESENT            0x00003c6144000502 */ PAD_CFG_NF(GPD1, NATIVE, DEEP, NF1),
/* GPD7      GPIO                 0x0000006704000200 */ PAD_NC(GPD7, DN_20K), /* unused, formerly USB always on */
/* GPD9      GPIO                 0x0000006904000200 */ PAD_CFG_GPO(GPD9, 0, PWROK),
/* GPD11     GPIO                 0x0000006b04000200 */ PAD_CFG_GPO(GPD11, 0, PWROK),
/* GPP_K0    GPIO                 0x0000001884000102 */ PAD_CFG_GPI(GPP_K0, NONE, PLTRST),
/* GPP_K1    GPIO                 0x0000001984000100 */ PAD_CFG_GPI(GPP_K1, NONE, PLTRST),
/* GPP_K2    GPIO                 0x0000001a84000100 */ PAD_CFG_GPI(GPP_K2, NONE, PLTRST),
/* GPP_K3    GPIO                 0x0000001b84000102 */ PAD_CFG_GPI(GPP_K3, NONE, PLTRST),
/* GPP_K4    GPIO                 0x0000001c44000300 */ PAD_NC(GPP_K4, NONE),
/* GPP_K5    GPIO                 0x0000001d44000300 */ PAD_NC(GPP_K5, NONE),
/* GPP_K8    GPIO                 0x0000002044000300 */ PAD_NC(GPP_K8, NONE),
/* GPP_K9    GPIO                 0x0000002144000300 */ PAD_NC(GPP_K9, NONE),
/* GPP_K10   GPIO                 0x0000002244000300 */ PAD_NC(GPP_K10, NONE),
/* GPP_K11   GPIO                 0x0000002344000300 */ PAD_NC(GPP_K11, NONE),
/* GPP_K20   GPIO                 0x0000002c84000201 */ PAD_CFG_GPO(GPP_K20, 1, PLTRST),
/* GPP_K21   GPIO                 0x0000002d44000300 */ PAD_NC(GPP_K21, NONE),
/* GPP_H0    GPIO                 0x0000004844000300 */ PAD_NC(GPP_H0, NONE),
/* GPP_H2    GPIO                 0x0000004a44000300 */ PAD_NC(GPP_H2, NONE),
/* GPP_H3    GPIO                 0x0000004b44000300 */ PAD_NC(GPP_H3, NONE),
/* GPP_H10   GPIO                 0x0000005244000300 */ PAD_NC(GPP_H10, NONE),
/* GPP_H15   GPIO                 0x0000005744000300 */ PAD_NC(GPP_H15, NONE),
/* GPP_H17   GPIO                 0x0000005944000300 */ PAD_NC(GPP_H17, NONE),
/* GPP_E0    SATAXPCIE0           0x0000001844800502 */ PAD_CFG_NF(GPP_E0, NONE, DEEP, NF1),
/* GPP_E1    GPIO                 0x0000001944000300 */ PAD_NC(GPP_E1, NONE),
/* GPP_E2    GPIO                 0x0000001a44000300 */ PAD_NC(GPP_E2, NONE),
/* GPP_E4    SATA_DEVSLP0         0x0000001c44000600 */ PAD_CFG_NF(GPP_E4, NONE, DEEP, NF1),
/* GPP_E5    GPIO                 0x0000301d44800102 */ PAD_CFG_GPI(GPP_E5, NONE, DEEP),
/* GPP_E6    GPIO                 0x0000001e44800102 */ PAD_CFG_GPI(GPP_E6, NONE, DEEP),
/* GPP_E8    SATALED#             0x0000002044000700 */ PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
/* GPP_E9    USB2_OC0#            0x0000302144000702 */ PAD_CFG_NF(GPP_E9, UP_20K, DEEP, NF1),
/* GPP_E10   USB2_OC1#            0x0000302244000702 */ PAD_CFG_NF(GPP_E10, UP_20K, DEEP, NF1),
/* GPP_E11   USB2_OC2#            0x0000302344000702 */ PAD_CFG_NF(GPP_E11, UP_20K, DEEP, NF1),
/* GPP_E12   GPIO                 0x0000002484000200 */ PAD_CFG_GPO(GPP_E12, 0, PLTRST),
/* GPP_F1    GPIO                 0x0000003144000300 */ PAD_NC(GPP_F1, NONE),
/* GPP_F2    GPIO                 0x0000003244000300 */ PAD_NC(GPP_F2, NONE),
/* GPP_F3    GPIO                 0x0000003344000300 */ PAD_NC(GPP_F3, NONE),
/* GPP_F4    GPIO                 0x0000003444000300 */ PAD_NC(GPP_F4, NONE),
/* GPP_F5    GPIO                 0x0000003544000300 */ PAD_NC(GPP_F5, NONE),
/* GPP_F6    SATA_DEVSLP4         0x0000003644000700 */ PAD_CFG_NF(GPP_F6, NONE, DEEP, NF1),
/* GPP_F8    GPIO                 0x0000003844000300 */ PAD_NC(GPP_F8, NONE),
/* GPP_F9    GPIO                 0x0000003944000300 */ PAD_NC(GPP_F9, NONE),
/* GPP_F10   GPIO                 0x0000003a84000100 */ PAD_CFG_GPI(GPP_F10, NONE, PLTRST),
/* GPP_F13   GPIO                 0x0000003d82800102 */ PAD_CFG_GPI(GPP_F13, NONE, PLTRST),
/* GPP_F14   GPIO                 0x0000003e44000300 */ PAD_NC(GPP_F14, NONE),
/* GPP_F15   USB2_OC4#            0x0000303f44000702 */ PAD_CFG_NF(GPP_F15, UP_20K, DEEP, NF1),
/* GPP_F16   USB2_OC5#            0x0000304044000702 */ PAD_CFG_NF(GPP_F16, UP_20K, DEEP, NF1),
/* GPP_F17   USB2_OC6#            0x0000304144000702 */ PAD_CFG_NF(GPP_F17, UP_20K, DEEP, NF1),
/* GPP_F18   GPIO                 0x0000004240880102 */ PAD_CFG_GPI_APIC(GPP_F18, NONE, DEEP, LEVEL, INVERT),
/* GPP_F19   eDP_VDDEN            0x0000004344000700 */ PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1),
/* GPP_F20   eDP_BKLTEN           0x0000004444000700 */ PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1),
/* GPP_F21   eDP_BKLTCTL          0x0000004544000700 */ PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1),
/* GPP_F22   GPIO                 0x0000004644000300 */ PAD_NC(GPP_F22, NONE),
/* GPP_F23   GPIO                 0x0000004744000300 */ PAD_NC(GPP_F23, NONE),
/* GPP_I0    DDPB_HPD0            0x00003c0040000700 */ PAD_CFG_NF(GPP_I0, NATIVE, DEEP, NF1),
/* GPP_I1    DDPB_HPD1            0x00003c0040000700 */ PAD_CFG_NF(GPP_I1, NATIVE, DEEP, NF1),
/* GPP_I2    DDPB_HPD2            0x00003c0040000700 */ PAD_CFG_NF(GPP_I2, NATIVE, DEEP, NF1),
/* GPP_I3    DDPB_HPD3            0x0000000040000700 */ PAD_CFG_NF(GPP_I3, NONE, DEEP, NF1),
/* GPP_I4    EDP_HPD              0x0000000040000700 */ PAD_CFG_NF(GPP_I4, NONE, DEEP, NF1),
/* GPP_I5    DDPB_CTRLCLK         0x0000000040000700 */ PAD_CFG_NF(GPP_I5, NONE, DEEP, NF1),
/* GPP_I6    DDPB_CTRLDATA        0x0000000040000702 */ PAD_CFG_NF(GPP_I6, NONE, DEEP, NF1),
/* GPP_I7    DDPC_CTRLCLK         0x0000000040000700 */ PAD_CFG_NF(GPP_I7, NONE, DEEP, NF1),
/* GPP_I8    DDPC_CTRLDATA        0x0000000040000700 */ PAD_CFG_NF(GPP_I8, NONE, DEEP, NF1),
/* GPP_I9    DDPD_CTRLCLK         0x0000100040000700 */ PAD_CFG_NF(GPP_I9, DN_20K, DEEP, NF1),
/* GPP_I10   DDPD_CTRLDATA        0x0000100040000700 */ PAD_CFG_NF(GPP_I10, DN_20K, DEEP, NF1),
/* GPP_J2    n/a                  0x0000003044000700 */ PAD_CFG_NF(GPP_J2, NONE, DEEP, NF1),
/* GPP_J3    n/a                  0x0000003144000700 */ PAD_CFG_NF(GPP_J3, NONE, DEEP, NF1),
/* GPP_J4    CNV_BRI_DT           0x0000003244000702 */ PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1),
/* GPP_J5    GPIO                 0x0000003344000300 */ PAD_NC(GPP_J5, NONE),
/* GPP_J6    CNV_RGI_DT           0x0000003444000700 */ PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1),
/* GPP_J7    CNV_RGI_RSP          0x0000003544000700 */ PAD_CFG_NF(GPP_J7, NONE, DEEP, NF1),
/* GPP_J8    CNV_MFUART2_RXD      0x0000003644000602 */ PAD_CFG_NF(GPP_J8, NONE, DEEP, NF1),
/* GPP_J9    CNV_MFUART2_TXD      0x0000003744000702 */ PAD_CFG_NF(GPP_J9, NONE, DEEP, NF1),
/* GPP_J10   n/a                  0x0000003844000602 */ PAD_CFG_NF(GPP_J10, NONE, DEEP, NF1),
/* GPP_J11   A4WP_PRESENT         0x0000003944000700 */ PAD_CFG_NF(GPP_J11, NONE, DEEP, NF1),
};

const struct pad_config *variant_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(gpio_table);
	return gpio_table;
}
