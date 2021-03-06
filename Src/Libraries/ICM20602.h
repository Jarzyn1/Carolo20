/*
 * ICM20602.h
 *
 *  Created on: Nov 14, 2016
 *      Author: mice
 */

void icm20602GyroInit(uint8_t lpf);

#ifndef ICM20602_H_
#define ICM20602_H_

#define ICM20602_READ					0x80

#define ICM20602_BIT_RESET				0x80
#define GYRO_LPF_NONE       			7
#define GYRO_FULL_SCALE					0

#define ICM20602_XG_OFFS_TC_H			0x04
#define ICM20602_XG_OFFS_TC_L			0x05
#define ICM20602_YG_OFFS_TC_H			0x07
#define ICM20602_YG_OFFS_TC_L			0x08
#define ICM20602_ZG_OFFS_TC_H			0x0A
#define ICM20602_ZG_OFFS_TC_L			0x0B

#define ICM20602_SELF_TEST_X_ACCEL		0x0D
#define ICM20602_SELF_TEST_Y_ACCEL		0x0E
#define ICM20602_SELF_TEST_Z_ACCEL		0x0F

#define ICM20602_XG_OFFS_USRH			0x13
#define ICM20602_XG_OFFS_USRL			0x14
#define ICM20602_YG_OFFS_USRH			0x15
#define ICM20602_YG_OFFS_USRL			0x16
#define ICM20602_ZG_OFFS_USRH			0x17
#define ICM20602_ZG_OFFS_USRL			0x18

#define ICM20602_SMPLRT_DIV 			0x19
#define ICM20602_CONFIG					0x1A
#define ICM20602_GYRO_CONFIG			0x1B
#define ICM20602_ACCEL_CONFIG 			0x1C
#define ICM20602_ACCEL_CONFIG2			0x1D
#define ICM20602_LP_MODE_CFG			0x1E

#define ICM20602_WOM_X_THR 				0x20
#define ICM20602_WOM_Y_THR 				0x21
#define ICM20602_WOM_Z_THR 				0x22

#define ICM20602_FIFO_EN				0x23

#define ICM20602_FSYNC_INT				0x36
#define ICM20602_INT_PIN_CFG			0x37
#define ICM20602_INT_ENABLE				0x38
#define ICM20602_FIFO_WM_INT_STATUS		0x39
#define ICM20602_INT_STATUS				0x3A

#define ICM20602_ACCEL_XOUT_H			0x3B
#define ICM20602_ACCEL_XOUT_L			0x3C
#define ICM20602_ACCEL_YOUT_H			0x3D
#define ICM20602_ACCEL_YOUT_L			0x3E
#define ICM20602_ACCEL_ZOUT_H			0x3F
#define ICM20602_ACCEL_ZOUT_L 			0x40
#define ICM20602_TEMP_OUT_H				0x41
#define ICM20602_TEMP_OUT_L				0x42
#define ICM20602_GYRO_XOUT_H			0x43
#define ICM20602_GYRO_XOUT_L			0x44
#define ICM20602_GYRO_YOUT_H			0x45
#define ICM20602_GYRO_YOUT_L			0x46
#define ICM20602_GYRO_ZOUT_H			0x47
#define ICM20602_GYRO_ZOUT_L			0x48

#define ICM20602_SELF_TEST_X_GYRO		0x50
#define ICM20602_SELF_TEST_Y_GYRO		0x51
#define ICM20602_SELF_TEST_Z_GYRO 		0x52

#define ICM20602_FIFO_WM_TH1			0x60
#define ICM20602_FIFO_WM_TH2			0x61

#define ICM20602_SIGNAL_PATH_RESET		0x68
#define ICM20602_ACCEL_INTEL_CTRL		0x69
#define ICM20602_USER_CTRL				0x6A
#define ICM20602_PWR_MGMT_1 			0x6B
#define ICM20602_PWR_MGMT_2				0x6C

#define ICM20602_I2C_IF					0x70

#define ICM20602_FIFO_COUNTH			0x72
#define ICM20602_FIFO_COUNTL			0x73
#define ICM20602_FIFO_R_W				0x74
#define ICM20602_WHO_AM_I				0x75

#define ICM20602_XA_OFFSET_H			0x77
#define ICM20602_XA_OFFSET_L			0x78

#define ICM20602_YA_OFFSET_H			0x7A
#define ICM20602_YA_OFFSET_L			0x7B

#define ICM20602_ZA_OFFSET_H			0x7D
#define ICM20602_ZA_OFFSET_L			0x7E

//reset values
#define WHOAMI_RESET_VAL                0x12
#define POWER_MANAGMENT_1_RESET_VAL     0x01
#define DEFAULT_RESET_VALUE             0x00

#define WHOAMI_DEFAULT_VAL              0x68

//CONFIG register masks
#define MPU9250_FIFO_MODE_MASK          0x40
#define MPU9250_EXT_SYNC_SET_MASK       0x38
#define MPU9250_DLPF_CFG_MASK           0x07

//GYRO_CONFIG register masks
#define ICM20602_XGYRO_CTEN_MASK         0x80
#define ICM20602_YGYRO_CTEN_MASK         0x40
#define ICM20602_ZGYRO_CTEN_MASK         0x20
#define ICM20602_GYRO_FS_SEL_MASK        0x18
#define ICM20602_FCHOICE_B_MASK          0x03

#define ICM20602_GYRO_FULL_SCALE_250DPS		0
#define ICM20602_GYRO_FULL_SCALE_500DPS		1
#define ICM20602_GYRO_FULL_SCALE_1000DPS	2
#define ICM20602_GYRO_FULL_SCALE_2000DPS	3

//ACCEL_CONFIG register masks
#define MPU9250_AX_ST_EN_MASK           0x80
#define MPU9250_AY_ST_EN_MASK           0x40
#define MPU9250_AZ_ST_EN_MASK           0x20
#define MPU9250_ACCEL_FS_SEL_MASK       0x18

#define ICM20602_FULL_SCALE_2G			0b00
#define ICM20602_FULL_SCALE_4G			0b01
#define ICM20602_FULL_SCALE_8G			0b10
#define ICM20602_FULL_SCALE_16G			0b11

//ACCEL_CONFIG_2 register masks
#define MPU9250_ACCEL_FCHOICE_B_MASK    0xC0
#define MPU9250_A_DLPF_CFG_MASK         0x03

//LP_ACCEL_ODR register masks
#define MPU9250_LPOSC_CLKSEL_MASK       0x0F

//FIFO_EN register masks
#define MPU9250_TEMP_FIFO_EN_MASK       0x80
#define MPU9250_GYRO_XOUT_MASK          0x40
#define MPU9250_GYRO_YOUT_MASK          0x20
#define MPU9250_GYRO_ZOUT_MASK          0x10
#define MPU9250_ACCEL_MASK              0x08

//INT_PIN_CFG register masks
#define MPU9250_ACTL_MASK               0x80
#define MPU9250_OPEN_MASK               0x40
#define MPU9250_LATCH_INT_EN_MASK       0x20
#define MPU9250_INT_ANYRD_2CLEAR_MASK   0x10
#define MPU9250_ACTL_FSYNC_MASK         0x08
#define MPU9250_FSYNC_INT_MODE_EN_MASK  0x04
#define MPU9250_BYPASS_EN_MASK          0x02

//INT_ENABLE register masks
#define MPU9250_WOM_EN_MASK             0x40
#define MPU9250_FIFO_OFLOW_EN_MASK      0x10
#define MPU9250_FSYNC_INT_EN_MASK       0x08
#define MPU9250_RAW_RDY_EN_MASK         0x01

//INT_STATUS register masks
#define MPU9250_WOM_INT_MASK            0x40
#define MPU9250_FIFO_OFLOW_INT_MASK     0x10
#define MPU9250_FSYNC_INT_MASK          0x08
#define MPU9250_RAW_DATA_RDY_INT_MASK   0x01

//SIGNAL_PATH_RESET register masks
#define MPU9250_GYRO_RST_MASK           0x04
#define MPU9250_ACCEL_RST_MASK          0x02
#define MPU9250_TEMP_RST_MASK           0x01

//MOT_DETECT_CTRL register masks
#define MPU9250_ACCEL_INTEL_EN_MASK     0x80
#define MPU9250_ACCEL_INTEL_MODE_MASK   0x40

//USER_CTRL register masks
#define MPU9250_FIFO_EN_MASK            0x40
#define MPU9250_I2C_MST_EN_MASK         0x20
#define MPU9250_I2C_IF_DIS_MASK         0x10
#define MPU9250_FIFO_RST_MASK           0x04
#define MPU9250_I2C_MST_RST_MASK        0x02
#define MPU9250_SIG_COND_RST_MASK       0x01

//PWR_MGMT_1 register masks
#define MPU9250_H_RESET_MASK            0x80
#define MPU9250_SLEEP_MASK              0x40
#define MPU9250_CYCLE_MASK              0x20
#define MPU9250_GYRO_STANDBY_CYCLE_MASK 0x10
#define MPU9250_PD_PTAT_MASK            0x08
#define MPU9250_CLKSEL_MASK             0x07

//PWR_MGMT_2 register masks
#define MPU9250_DISABLE_XA_MASK         0x20
#define MPU9250_DISABLE_YA_MASK         0x10
#define MPU9250_DISABLE_ZA_MASK         0x08
#define MPU9250_DISABLE_XG_MASK         0x04
#define MPU9250_DISABLE_YG_MASK         0x02
#define MPU9250_DISABLE_ZG_MASK         0x01

#define MPU9250_DISABLE_XYZA_MASK       0x38
#define MPU9250_DISABLE_XYZG_MASK       0x07


#endif /* ICM20602_H_ */
