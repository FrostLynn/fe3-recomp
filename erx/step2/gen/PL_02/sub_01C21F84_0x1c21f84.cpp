#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C21F84
// Address: 0x1c21f84 - 0x1c22108
void sub_01C21F84_0x1c21f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21F84_0x1c21f84");
#endif

    switch (ctx->pc) {
        case 0x1c21f94u: goto label_1c21f94;
        case 0x1c21fc4u: goto label_1c21fc4;
        case 0x1c21fd4u: goto label_1c21fd4;
        case 0x1c21fe0u: goto label_1c21fe0;
        case 0x1c21ff0u: goto label_1c21ff0;
        case 0x1c2201cu: goto label_1c2201c;
        case 0x1c22064u: goto label_1c22064;
        case 0x1c22070u: goto label_1c22070;
        case 0x1c22078u: goto label_1c22078;
        case 0x1c2208cu: goto label_1c2208c;
        case 0x1c22094u: goto label_1c22094;
        case 0x1c22098u: goto label_1c22098;
        case 0x1c220dcu: goto label_1c220dc;
        case 0x1c220e8u: goto label_1c220e8;
        default: break;
    }

    ctx->pc = 0x1c21f84u;

    // 0x1c21f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f8c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C21F8Cu;
    {
        const bool branch_taken_0x1c21f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F8Cu;
        // 0x1c21f90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21f8c) {
            ctx->pc = 0x1C21F18u;
            return;
        }
    }
    ctx->pc = 0x1C21F94u;
label_1c21f94:
    // 0x1c21f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f9c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C21F9Cu;
    {
        const bool branch_taken_0x1c21f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F9Cu;
        // 0x1c21fa0: 0x240601d9  addiu       $a2, $zero, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 473));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21f9c) {
            ctx->pc = 0x1C21F18u;
            return;
        }
    }
    ctx->pc = 0x1C21FA4u;
    // 0x1c21fa4: 0x0  nop
    ctx->pc = 0x1c21fa4u;
    // NOP
    // 0x1c21fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21fac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21fb4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21fbc: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21FBCu;
    SET_GPR_U32(ctx, 31, 0x1C21FC4u);
    ctx->pc = 0x1C21FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21FBCu;
    // 0x1c21fc0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21FBCu, 0x1C21FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21FC4u;
label_1c21fc4:
    // 0x1c21fc4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21fc8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21fcc: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21FCCu;
    SET_GPR_U32(ctx, 31, 0x1C21FD4u);
    ctx->pc = 0x1C21FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21FCCu;
    // 0x1c21fd0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21FCCu, 0x1C21FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21FD4u;
label_1c21fd4:
    // 0x1c21fd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c21fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21fd8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21FD8u;
    SET_GPR_U32(ctx, 31, 0x1C21FE0u);
    ctx->pc = 0x1C21FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21FD8u;
    // 0x1c21fdc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21FD8u, 0x1C21FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21FE0u;
label_1c21fe0:
    // 0x1c21fe0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21fe0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21fe4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21fe8: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21FE8u;
    SET_GPR_U32(ctx, 31, 0x1C21FF0u);
    ctx->pc = 0x1C21FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21FE8u;
    // 0x1c21fec: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21FE8u, 0x1C21FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21FF0u;
label_1c21ff0:
    // 0x1c21ff0: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c21ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c21ff4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c21ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c21ff8: 0x25eff5e0  addiu       $t7, $t7, -0xA20
    ctx->pc = 0x1c21ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964704));
    // 0x1c21ffc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c21ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c22000: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c22000u;
    { uint32_t bits = FAST_READ32(0x1C2F5E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c22004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c22008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2200c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2200Cu;
    {
        const bool branch_taken_0x1c2200c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C22010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2200Cu;
        // 0x1c22010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2200c) {
            ctx->pc = 0x1C22020u;
            goto label_1c22020;
        }
    }
    ctx->pc = 0x1C22014u;
    // 0x1c22014: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C22014u;
    SET_GPR_U32(ctx, 31, 0x1C2201Cu);
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C22014u, 0x1C2201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2201Cu;
label_1c2201c:
    // 0x1c2201c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c2201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c22020:
    // 0x1c22020: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c22020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c22024: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c22024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c22028: 0x25eff5e4  addiu       $t7, $t7, -0xA1C
    ctx->pc = 0x1c22028u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964708));
    // 0x1c2202c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1c2202cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c22030: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c22030u;
    { uint32_t bits = FAST_READ32(0x1C2F5E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c22034: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c22034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c22038: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C22038u;
    {
        const bool branch_taken_0x1c22038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22038u;
        // 0x1c2203c: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22038) {
            ctx->pc = 0x1C220B0u;
            goto label_1c220b0;
        }
    }
    ctx->pc = 0x1C22040u;
    // 0x1c22040: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c22040u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c22044: 0x25eff5e8  addiu       $t7, $t7, -0xA18
    ctx->pc = 0x1c22044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964712));
    // 0x1c22048: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c22048u;
    { uint32_t bits = FAST_READ32(0x1C2F5E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2204c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c2204cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c22050: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1C22050u;
    {
        const bool branch_taken_0x1c22050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C22054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22050u;
        // 0x1c22054: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22050) {
            ctx->pc = 0x1C220B4u;
            goto label_1c220b4;
        }
    }
    ctx->pc = 0x1C22058u;
    // 0x1c22058: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c22058u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c2205c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c22060: 0x25eff5ec  addiu       $t7, $t7, -0xA14
    ctx->pc = 0x1c22060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964716));
label_1c22064:
    // 0x1c22064: 0x24840464  addiu       $a0, $a0, 0x464
    ctx->pc = 0x1c22064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1124));
    // 0x1c22068: 0xc707f0e  jal         func_1C1FC38
    ctx->pc = 0x1C22068u;
    SET_GPR_U32(ctx, 31, 0x1C22070u);
    ctx->pc = 0x1C2206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22068u;
    // 0x1c2206c: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC38u, 0x1C22068u, 0x1C22070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22070u;
label_1c22070:
    // 0x1c22070: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C22070u;
    SET_GPR_U32(ctx, 31, 0x1C22078u);
    ctx->pc = 0x1C22074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22070u;
    // 0x1c22074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C22070u, 0x1C22078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22078u;
label_1c22078:
    // 0x1c22078: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c22078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2207c: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2207Cu;
    {
        const bool branch_taken_0x1c2207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C22080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2207Cu;
        // 0x1c22080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2207c) {
            ctx->pc = 0x1C220A8u;
            goto label_1c220a8;
        }
    }
    ctx->pc = 0x1C22084u;
    // 0x1c22084: 0xc707c70  jal         func_1C1F1C0
    ctx->pc = 0x1C22084u;
    SET_GPR_U32(ctx, 31, 0x1C2208Cu);
    ctx->pc = 0x1C1F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1C0u, 0x1C22084u, 0x1C2208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2208Cu;
label_1c2208c:
    // 0x1c2208c: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C2208Cu;
    SET_GPR_U32(ctx, 31, 0x1C22094u);
    ctx->pc = 0x1C22090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2208Cu;
    // 0x1c22090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C2208Cu, 0x1C22094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22094u;
label_1c22094:
    // 0x1c22094: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c22094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c22098:
    // 0x1c22098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c22098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2209c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c220a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C220A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C220A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C220A0u;
        // 0x1c220a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C220A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C220A8u;
label_1c220a8:
    // 0x1c220a8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C220A8u;
    {
        const bool branch_taken_0x1c220a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C220A8u;
        // 0x1c220ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c220a8) {
            ctx->pc = 0x1C22098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c22098;
        }
    }
    ctx->pc = 0x1C220B0u;
label_1c220b0:
    // 0x1c220b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c220b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c220b4:
    // 0x1c220b4: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c220b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c220b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c220b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c220bc: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C220BCu;
    {
        const bool branch_taken_0x1c220bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C220C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C220BCu;
        // 0x1c220c0: 0x25eff5f0  addiu       $t7, $t7, -0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c220bc) {
            ctx->pc = 0x1C22064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c22064;
        }
    }
    ctx->pc = 0x1C220C4u;
    // 0x1c220c4: 0x0  nop
    ctx->pc = 0x1c220c4u;
    // NOP
    // 0x1c220c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c220c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c220cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c220ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c220d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c220d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c220d4: 0xc707c64  jal         func_1C1F190
    ctx->pc = 0x1C220D4u;
    SET_GPR_U32(ctx, 31, 0x1C220DCu);
    ctx->pc = 0x1C220D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C220D4u;
    // 0x1c220d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F190u, 0x1C220D4u, 0x1C220DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C220DCu;
label_1c220dc:
    // 0x1c220dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c220dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c220e0: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C220E0u;
    SET_GPR_U32(ctx, 31, 0x1C220E8u);
    ctx->pc = 0x1C220E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C220E0u;
    // 0x1c220e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C220E0u, 0x1C220E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C220E8u;
label_1c220e8:
    // 0x1c220e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c220e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c220ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c220ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c220f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c220f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c220f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c220f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c220f8: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c220f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c220fc: 0x8707f14  j           func_1C1FC50
    ctx->pc = 0x1C220FCu;
    ctx->pc = 0x1C22100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C220FCu;
    // 0x1c22100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC50u;
    sub_01C1FC50_0x1c1fc50(rdram, ctx, runtime); return;
    ctx->pc = 0x1C22104u;
    // 0x1c22104: 0x0  nop
    ctx->pc = 0x1c22104u;
    // NOP
    ctx->pc = 0x1c22108u;
}
