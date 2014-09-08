/*******************************************************************************
* File Name: idac_hi_out.h  
* Version 2.0
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_idac_hi_out_H) /* Pins idac_hi_out_H */
#define CY_PINS_idac_hi_out_H

#include "cytypes.h"
#include "cyfitter.h"
#include "idac_hi_out_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    idac_hi_out_Write(uint8 value) ;
void    idac_hi_out_SetDriveMode(uint8 mode) ;
uint8   idac_hi_out_ReadDataReg(void) ;
uint8   idac_hi_out_Read(void) ;
uint8   idac_hi_out_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define idac_hi_out_DRIVE_MODE_BITS        (3)
#define idac_hi_out_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - idac_hi_out_DRIVE_MODE_BITS))
#define idac_hi_out_DRIVE_MODE_SHIFT       (0x00u)
#define idac_hi_out_DRIVE_MODE_MASK        (0x07u << idac_hi_out_DRIVE_MODE_SHIFT)

#define idac_hi_out_DM_ALG_HIZ         (0x00u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_DIG_HIZ         (0x01u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_RES_UP          (0x02u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_RES_DWN         (0x03u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_OD_LO           (0x04u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_OD_HI           (0x05u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_STRONG          (0x06u << idac_hi_out_DRIVE_MODE_SHIFT)
#define idac_hi_out_DM_RES_UPDWN       (0x07u << idac_hi_out_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define idac_hi_out_MASK               idac_hi_out__MASK
#define idac_hi_out_SHIFT              idac_hi_out__SHIFT
#define idac_hi_out_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define idac_hi_out_PS                     (* (reg32 *) idac_hi_out__PS)
/* Port Configuration */
#define idac_hi_out_PC                     (* (reg32 *) idac_hi_out__PC)
/* Data Register */
#define idac_hi_out_DR                     (* (reg32 *) idac_hi_out__DR)
/* Input Buffer Disable Override */
#define idac_hi_out_INP_DIS                (* (reg32 *) idac_hi_out__PC2)


#if defined(idac_hi_out__INTSTAT)  /* Interrupt Registers */

    #define idac_hi_out_INTSTAT                (* (reg32 *) idac_hi_out__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins idac_hi_out_H */


/* [] END OF FILE */
