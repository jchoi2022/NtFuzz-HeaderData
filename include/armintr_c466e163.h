       
#error This header is specific to ARM targets
typedef enum _tag_ARMINTR_SHIFT_T
{
    _ARM_LSR = 0,
    _ARM_LSL = 1,
    _ARM_ASR = 2,
    _ARM_ROR = 3
}
_ARMINTR_SHIFT_T;
             int __arm_gen_s_Rd_Rd (const unsigned int, int);
             int __arm_gen_s_Rd_RdRn (const unsigned int, int, int);
             int __arm_gen_s_Rd_RdRm (const unsigned int, int, int);
             int __arm_gen_s_Rd_RnRm_g (const unsigned int, int, int);
             int __arm_gen_s_Rd_RnRm_q (const unsigned int, int, int);
             int __arm_gen_s_Rd_Rn (const unsigned int, int);
             int __arm_gen_s_Rd_Rn_q (const unsigned int, int);
             int __arm_gen_s_Rd_RnRm (const unsigned int, int, int);
             int __arm_gen_s_Rd_Rm (const unsigned int, int);
             int __arm_gen_s_Rd_Rm_q (const unsigned int, int);
             int __arm_gen_s_Rd_Rm2 (const unsigned int, int);
         __int64 __arm_gen_s_Rdn_RdnRmRs(const unsigned int, __int64, int, int);
         __int64 __arm_gen_s_Rdn_RmRs (const unsigned int, int, int);
             int __arm_gen_s_Rn_RmRs (const unsigned int, int, int);
             int __arm_gen_s_Rn_RmRsRd (const unsigned int, int, int, int);
unsigned int __arm_gen_u_Rd_Rd (const unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_RdRn (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_RdRm (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_RnRm_g (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_Rn (const unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_RnRm (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_Rm (const unsigned int, unsigned int);
unsigned int __arm_gen_u_Rd_Rm2 (const unsigned int, unsigned int);
unsigned __int64 __arm_gen_u_Rdn_RdnRmRs(const unsigned int, unsigned __int64, unsigned int, unsigned int);
unsigned __int64 __arm_gen_u_Rdn_RmRs (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rn_RmRs (const unsigned int, unsigned int, unsigned int);
unsigned int __arm_gen_u_Rn_RmRsRd (const unsigned int, unsigned int, unsigned int, unsigned int);
    (_ARMINTR_ASSERT(_ARMINTR_IN_RANGE((val), (low), (high)), name " is out of range '" #low " - " #high "'"))
    (_ARMINTR_ASSERT(((rot) & ~0x18U) == 0, "rotation must be 0, 8, 16, or 24"))
    (_ARMINTR_ASSERT_RANGE((sat_bit), low, high, "saturation bit position"))
    (_ARMINTR_ASSERT(((type) == _ARM_LSL) || ((type) == _ARM_ASR), "shift type must be _ARM_LSL or _ARM_ASR"), \
     _ARMINTR_ASSERT(((type) != _ARM_LSL) || _ARMINTR_IN_RANGE((amt), 0, 31), "shift is out of range '0 - 31'"), \
     _ARMINTR_ASSERT(((type) != _ARM_ASR) || _ARMINTR_IN_RANGE((amt), 1, 32), "shift is out of range '1 - 32'"))
    __arm_gen_s_Rd_RnRm(_ARMINTR_PKHBT | _ARMINTR_ENCODE_PKHSHIFT(_Lsl_imm), (_Rn), (_Rm)))
    __arm_gen_s_Rd_RnRm(_ARMINTR_PKHTB | _ARMINTR_ENCODE_PKHSHIFT(_Asr_imm), (_Rn), (_Rm)))
    _ARMINTR_S_DMx(_ARMINTR_SSAT | _ARMINTR_ENCODE_IMM5_16((_Sat_imm) - 1) | _ARMINTR_ENCODE_SAT_SH((_Shift_type), (_Shift_imm)), (_Rn)))
    _ARMINTR_S_DMx(_ARMINTR_USAT | _ARMINTR_ENCODE_IMM5_16(_Sat_imm) | _ARMINTR_ENCODE_SAT_SH((_Shift_type), (_Shift_imm)), (_Rn)))
    _ARMINTR_S_DMx(_ARMINTR_SSAT16 | _ARMINTR_ENCODE_IMM4_16((_Sat_imm) - 1), (_Rn)))
    _ARMINTR_S_DMx(_ARMINTR_USAT16 | _ARMINTR_ENCODE_IMM4_16(_Sat_imm), (_Rn)))
    __arm_gen_u_Rd_Rd(_ARMINTR_BFC | _ARMINTR_ENCODE_IMM5_7(_Lsb) | _ARMINTR_ENCODE_IMM5_16((_Lsb) + (_Width) - 1), (_Rd)))
    _ARMINTR_U_DDMx(_ARMINTR_BFI | _ARMINTR_ENCODE_IMM5_7(_Lsb) | _ARMINTR_ENCODE_IMM5_16((_Lsb) + (_Width) - 1), (_Rd), (_Rn)))
    _ARMINTR_S_DMx(_ARMINTR_SBFX | _ARMINTR_ENCODE_IMM5_7(_Lsb) | _ARMINTR_ENCODE_IMM5_16((_Width) - 1), (_Rn)))
    _ARMINTR_U_DMx(_ARMINTR_UBFX | _ARMINTR_ENCODE_IMM5_7(_Lsb) | _ARMINTR_ENCODE_IMM5_16((_Width) - 1), (_Rn)))
typedef enum _tag_ARMINTR_CPS_OP
{
    _ARM_CPS_ENABLE_INTERRUPTS = 1,
    _ARM_CPS_DISABLE_INTERRUPTS = 2,
    _ARM_CPS_CHANGE_MODE = 4
}
_ARMINTR_CPS_OP;
typedef enum _tag_ARMINTR_CPS_FLAG
{
    _ARM_CPS_INTERRUPT_FLAG_F = 1,
    _ARM_CPS_INTERRUPT_FLAG_I = 2,
    _ARM_CPS_INTERRUPT_FLAG_A = 4
}
_ARMINTR_CPS_FLAG;
void __cps(unsigned int _Ops, unsigned int _Flags, unsigned int _Mode);
typedef enum _tag_ARMINTR_BARRIER_TYPE
{
    _ARM_BARRIER_SY = 0xF,
    _ARM_BARRIER_ST = 0xE,
    _ARM_BARRIER_ISH = 0xB,
    _ARM_BARRIER_ISHST = 0xA,
    _ARM_BARRIER_NSH = 0x7,
    _ARM_BARRIER_NSHST = 0x6,
    _ARM_BARRIER_OSH = 0x3,
    _ARM_BARRIER_OSHST = 0x2
}
_ARMINTR_BARRIER_TYPE;
void __dmb(unsigned int _Type);
void __dsb(unsigned int _Type);
void __isb(unsigned int _Type);
typedef enum _tag_ARMINTR_BANKED_REG
{
    _ARM_BANKED_R8_USR = 0x0,
    _ARM_BANKED_R9_USR = 0x1,
    _ARM_BANKED_R10_USR = 0x2,
    _ARM_BANKED_R11_USR = 0x3,
    _ARM_BANKED_R12_USR = 0x4,
    _ARM_BANKED_R13_USR = 0x5,
    _ARM_BANKED_SP_USR = 0x5,
    _ARM_BANKED_R14_USR = 0x6,
    _ARM_BANKED_LR_USR = 0x6,
    _ARM_BANKED_R8_FIQ = 0x8,
    _ARM_BANKED_R9_FIQ = 0x9,
    _ARM_BANKED_R10_FIQ = 0xA,
    _ARM_BANKED_R11_FIQ = 0xB,
    _ARM_BANKED_R12_FIQ = 0xC,
    _ARM_BANKED_R13_FIQ = 0xD,
    _ARM_BANKED_SP_FIQ = 0xD,
    _ARM_BANKED_R14_FIQ = 0xE,
    _ARM_BANKED_LR_FIQ = 0xE,
    _ARM_BANKED_R14_IRQ = 0x10,
    _ARM_BANKED_LR_IRQ = 0x10,
    _ARM_BANKED_R13_IRQ = 0x11,
    _ARM_BANKED_SP_IRQ = 0x11,
    _ARM_BANKED_R14_SVC = 0x12,
    _ARM_BANKED_LR_SVC = 0x12,
    _ARM_BANKED_R13_SVC = 0x13,
    _ARM_BANKED_SP_SVC = 0x13,
    _ARM_BANKED_R14_ABT = 0x14,
    _ARM_BANKED_LR_ABT = 0x14,
    _ARM_BANKED_R13_ABT = 0x15,
    _ARM_BANKED_SP_ABT = 0x15,
    _ARM_BANKED_R14_UND = 0x16,
    _ARM_BANKED_LR_UND = 0x16,
    _ARM_BANKED_R13_UND = 0x17,
    _ARM_BANKED_SP_UND = 0x17,
    _ARM_BANKED_R14_MON = 0x1C,
    _ARM_BANKED_LR_MON = 0x1C,
    _ARM_BANKED_R13_MON = 0x1D,
    _ARM_BANKED_SP_MON = 0x1D,
    _ARM_BANKED_ELR_HYP = 0x1E,
    _ARM_BANKED_R13_HYP = 0x1F,
    _ARM_BANKED_SP_HYP = 0x1F,
    _ARM_BANKED_SPSR_FIQ = 0x2E,
    _ARM_BANKED_SPSR_IRQ = 0x30,
    _ARM_BANKED_SPSR_SVC = 0x32,
    _ARM_BANKED_SPSR_ABT = 0x34,
    _ARM_BANKED_SPSR_UND = 0x36,
    _ARM_BANKED_SPSR_MON = 0x3C,
    _ARM_BANKED_SPSR_HYP = 0x3E
}
_ARMINTR_BANKED_REG;
void _WriteBankedReg(int _Value, int _Reg);
int _ReadBankedReg(int _Reg);
}
