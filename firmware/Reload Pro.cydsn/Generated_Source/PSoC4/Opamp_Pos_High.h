/*******************************************************************************
* File Name: Opamp_Pos_High.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Opamp_Pos_High_H) /* Pins Opamp_Pos_High_H */
#define CY_PINS_Opamp_Pos_High_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Opamp_Pos_High_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Opamp_Pos_High_Write(uint8 value) ;
void    Opamp_Pos_High_SetDriveMode(uint8 mode) ;
uint8   Opamp_Pos_High_ReadDataReg(void) ;
uint8   Opamp_Pos_High_Read(void) ;
uint8   Opamp_Pos_High_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Opamp_Pos_High_DRIVE_MODE_BITS        (3)
#define Opamp_Pos_High_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Opamp_Pos_High_DRIVE_MODE_BITS))
#define Opamp_Pos_High_DRIVE_MODE_SHIFT       (0x00u)
#define Opamp_Pos_High_DRIVE_MODE_MASK        (0x07u << Opamp_Pos_High_DRIVE_MODE_SHIFT)

#define Opamp_Pos_High_DM_ALG_HIZ         (0x00u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_DIG_HIZ         (0x01u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_RES_UP          (0x02u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_RES_DWN         (0x03u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_OD_LO           (0x04u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_OD_HI           (0x05u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_STRONG          (0x06u << Opamp_Pos_High_DRIVE_MODE_SHIFT)
#define Opamp_Pos_High_DM_RES_UPDWN       (0x07u << Opamp_Pos_High_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Opamp_Pos_High_MASK               Opamp_Pos_High__MASK
#define Opamp_Pos_High_SHIFT              Opamp_Pos_High__SHIFT
#define Opamp_Pos_High_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Opamp_Pos_High_PS                     (* (reg32 *) Opamp_Pos_High__PS)
/* Port Configuration */
#define Opamp_Pos_High_PC                     (* (reg32 *) Opamp_Pos_High__PC)
/* Data Register */
#define Opamp_Pos_High_DR                     (* (reg32 *) Opamp_Pos_High__DR)
/* Input Buffer Disable Override */
#define Opamp_Pos_High_INP_DIS                (* (reg32 *) Opamp_Pos_High__PC2)


#if defined(Opamp_Pos_High__INTSTAT)  /* Interrupt Registers */

    #define Opamp_Pos_High_INTSTAT                (* (reg32 *) Opamp_Pos_High__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Opamp_Pos_High_H */


/* [] END OF FILE */
