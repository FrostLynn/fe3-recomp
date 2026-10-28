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

// Function: sub_01D67E30
// Address: 0x1d67e30 - 0x1d680b0
void sub_01D67E30_0x1d67e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67E30_0x1d67e30");
#endif

    switch (ctx->pc) {
        case 0x1d67e58u: goto label_1d67e58;
        case 0x1d67e68u: goto label_1d67e68;
        case 0x1d67e74u: goto label_1d67e74;
        case 0x1d67e84u: goto label_1d67e84;
        case 0x1d67e90u: goto label_1d67e90;
        case 0x1d67ea0u: goto label_1d67ea0;
        case 0x1d67ec4u: goto label_1d67ec4;
        case 0x1d67ed4u: goto label_1d67ed4;
        case 0x1d67ee4u: goto label_1d67ee4;
        case 0x1d67f18u: goto label_1d67f18;
        case 0x1d67f24u: goto label_1d67f24;
        case 0x1d67f3cu: goto label_1d67f3c;
        case 0x1d67f4cu: goto label_1d67f4c;
        case 0x1d67f58u: goto label_1d67f58;
        case 0x1d67f88u: goto label_1d67f88;
        case 0x1d67f94u: goto label_1d67f94;
        case 0x1d67fb4u: goto label_1d67fb4;
        case 0x1d67fc4u: goto label_1d67fc4;
        case 0x1d67fd0u: goto label_1d67fd0;
        case 0x1d67fe0u: goto label_1d67fe0;
        case 0x1d68030u: goto label_1d68030;
        case 0x1d6803cu: goto label_1d6803c;
        case 0x1d68048u: goto label_1d68048;
        case 0x1d68050u: goto label_1d68050;
        case 0x1d68060u: goto label_1d68060;
        default: break;
    }

    ctx->pc = 0x1d67e30u;

    // 0x1d67e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d67e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d67e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d67e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d67e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67e3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d67e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d67e40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d67e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d67e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d67e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d67e4c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67e50: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67E50u;
    SET_GPR_U32(ctx, 31, 0x1D67E58u);
    ctx->pc = 0x1D67E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E50u;
    // 0x1d67e54: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67E50u, 0x1D67E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E58u;
label_1d67e58:
    // 0x1d67e58: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67e58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67e5c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67e60: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67E60u;
    SET_GPR_U32(ctx, 31, 0x1D67E68u);
    ctx->pc = 0x1D67E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E60u;
    // 0x1d67e64: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67E60u, 0x1D67E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E68u;
label_1d67e68:
    // 0x1d67e68: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67e6c: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D67E74u);
    ctx->pc = 0x1D67E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E6Cu;
    // 0x1d67e70: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67E6Cu, 0x1D67E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E74u;
label_1d67e74:
    // 0x1d67e74: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67e74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67e78: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67e7c: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D67E84u);
    ctx->pc = 0x1D67E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E7Cu;
    // 0x1d67e80: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67E7Cu, 0x1D67E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E84u;
label_1d67e84:
    // 0x1d67e84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d67e88: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67E88u;
    SET_GPR_U32(ctx, 31, 0x1D67E90u);
    ctx->pc = 0x1D67E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E88u;
    // 0x1d67e8c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67E88u, 0x1D67E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E90u;
label_1d67e90:
    // 0x1d67e90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d67e94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d67e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e98: 0xc7599ce  jal         func_1D66738
    ctx->pc = 0x1D67E98u;
    SET_GPR_U32(ctx, 31, 0x1D67EA0u);
    ctx->pc = 0x1D67E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E98u;
    // 0x1d67e9c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66738u, 0x1D67E98u, 0x1D67EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67EA0u;
label_1d67ea0:
    // 0x1d67ea0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d67ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d67ea4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d67ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67ea8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d67ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d67eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67eb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d67eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67eb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d67eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d67ebc: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D67EBCu;
    SET_GPR_U32(ctx, 31, 0x1D67EC4u);
    ctx->pc = 0x1D67EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67EBCu;
    // 0x1d67ec0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D67EBCu, 0x1D67EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67EC4u;
label_1d67ec4:
    // 0x1d67ec4: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x1d67ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x1d67ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67ecc: 0xc759c7a  jal         func_1D671E8
    ctx->pc = 0x1D67ECCu;
    SET_GPR_U32(ctx, 31, 0x1D67ED4u);
    ctx->pc = 0x1D67ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67ECCu;
    // 0x1d67ed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D671E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D671E8u, 0x1D67ECCu, 0x1D67ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67ED4u;
label_1d67ed4:
    // 0x1d67ed4: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x1d67ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d67ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67edc: 0xc759c7c  jal         func_1D671F0
    ctx->pc = 0x1D67EDCu;
    SET_GPR_U32(ctx, 31, 0x1D67EE4u);
    ctx->pc = 0x1D67EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67EDCu;
    // 0x1d67ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D671F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D671F0u, 0x1D67EDCu, 0x1D67EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67EE4u;
label_1d67ee4:
    // 0x1d67ee4: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d67ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d67ee8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d67ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d67eec: 0x25efff80  addiu       $t7, $t7, -0x80
    ctx->pc = 0x1d67eecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967168));
    // 0x1d67ef0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d67ef0u;
    { uint32_t bits = FAST_READ32(0x1D6FF80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d67ef4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d67ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d67ef8: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x1D67EF8u;
    {
        const bool branch_taken_0x1d67ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D67EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67EF8u;
        // 0x1d67efc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67ef8) {
            ctx->pc = 0x1D68000u;
            goto label_1d68000;
        }
    }
    ctx->pc = 0x1D67F00u;
    // 0x1d67f00: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1d67f00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d67f04: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67F04u;
    {
        const bool branch_taken_0x1d67f04 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D67F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F04u;
        // 0x1d67f08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f04) {
            ctx->pc = 0x1D67F28u;
            goto label_1d67f28;
        }
    }
    ctx->pc = 0x1D67F0Cu;
    // 0x1d67f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f10: 0xc759c7e  jal         func_1D671F8
    ctx->pc = 0x1D67F10u;
    SET_GPR_U32(ctx, 31, 0x1D67F18u);
    ctx->pc = 0x1D67F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F10u;
    // 0x1d67f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D671F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D671F8u, 0x1D67F10u, 0x1D67F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F18u;
label_1d67f18:
    // 0x1d67f18: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d67f18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d67f1c: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1d67f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d67f20: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1d67f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
label_1d67f24:
    // 0x1d67f24: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d67f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d67f28:
    // 0x1d67f28: 0x15d2000e  bne         $t6, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1D67F28u;
    {
        const bool branch_taken_0x1d67f28 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D67F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F28u;
        // 0x1d67f2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f28) {
            ctx->pc = 0x1D67F64u;
            goto label_1d67f64;
        }
    }
    ctx->pc = 0x1D67F30u;
    // 0x1d67f30: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d67f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d67f34: 0xc7599d2  jal         func_1D66748
    ctx->pc = 0x1D67F34u;
    SET_GPR_U32(ctx, 31, 0x1D67F3Cu);
    ctx->pc = 0x1D67F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F34u;
    // 0x1d67f38: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66748u, 0x1D67F34u, 0x1D67F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F3Cu;
label_1d67f3c:
    // 0x1d67f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d67f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f44: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D67F44u;
    SET_GPR_U32(ctx, 31, 0x1D67F4Cu);
    ctx->pc = 0x1D67F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F44u;
    // 0x1d67f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D67F44u, 0x1D67F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F4Cu;
label_1d67f4c:
    // 0x1d67f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f50: 0xc7599d4  jal         func_1D66750
    ctx->pc = 0x1D67F50u;
    SET_GPR_U32(ctx, 31, 0x1D67F58u);
    ctx->pc = 0x1D67F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F50u;
    // 0x1d67f54: 0x240500c4  addiu       $a1, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66750u, 0x1D67F50u, 0x1D67F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F58u;
label_1d67f58:
    // 0x1d67f58: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d67f58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67f5c: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1d67f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67f60: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1d67f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
label_1d67f64:
    // 0x1d67f64: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D67F64u;
    {
        const bool branch_taken_0x1d67f64 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F64u;
        // 0x1d67f68: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f64) {
            ctx->pc = 0x1D67FC8u;
            goto label_1d67fc8;
        }
    }
    ctx->pc = 0x1D67F6Cu;
    // 0x1d67f6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f74: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d67f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67f78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67f78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f80: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67F80u;
    SET_GPR_U32(ctx, 31, 0x1D67F88u);
    ctx->pc = 0x1D67F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F80u;
    // 0x1d67f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67F80u, 0x1D67F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F88u;
label_1d67f88:
    // 0x1d67f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f8c: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D67F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D67F94u);
    ctx->pc = 0x1D67F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67F8Cu;
    // 0x1d67f90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D67F8Cu, 0x1D67F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F94u;
label_1d67f94:
    // 0x1d67f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d67f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67f9c: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x1d67f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x1d67fa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67fa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d67fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d67fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67fac: 0xc759c64  jal         func_1D67190
    ctx->pc = 0x1D67FACu;
    SET_GPR_U32(ctx, 31, 0x1D67FB4u);
    ctx->pc = 0x1D67FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67FACu;
    // 0x1d67fb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67190u, 0x1D67FACu, 0x1D67FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67FB4u;
label_1d67fb4:
    // 0x1d67fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d67fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67fbc: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D67FBCu;
    SET_GPR_U32(ctx, 31, 0x1D67FC4u);
    ctx->pc = 0x1D67FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67FBCu;
    // 0x1d67fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D67FBCu, 0x1D67FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67FC4u;
label_1d67fc4:
    // 0x1d67fc4: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1d67fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_1d67fc8:
    // 0x1d67fc8: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67FC8u;
    SET_GPR_U32(ctx, 31, 0x1D67FD0u);
    ctx->pc = 0x1D67FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67FC8u;
    // 0x1d67fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67FC8u, 0x1D67FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67FD0u;
label_1d67fd0:
    // 0x1d67fd0: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D67FD0u;
    {
        const bool branch_taken_0x1d67fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D67FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67FD0u;
        // 0x1d67fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67fd0) {
            ctx->pc = 0x1D67FE4u;
            goto label_1d67fe4;
        }
    }
    ctx->pc = 0x1D67FD8u;
    // 0x1d67fd8: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67FD8u;
    SET_GPR_U32(ctx, 31, 0x1D67FE0u);
    ctx->pc = 0x1D67FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67FD8u;
    // 0x1d67fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67FD8u, 0x1D67FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67FE0u;
label_1d67fe0:
    // 0x1d67fe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d67fe4:
    // 0x1d67fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d67fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67fec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d67fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67ff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d67ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d67ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d67ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67FF8u;
        // 0x1d67ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D68000u;
label_1d68000:
    // 0x1d68000: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D68000u;
    {
        const bool branch_taken_0x1d68000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68000u;
        // 0x1d68004: 0x8e0e0024  lw          $t6, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68000) {
            ctx->pc = 0x1D67F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67f24;
        }
    }
    ctx->pc = 0x1D68008u;
    // 0x1d68008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d68008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6800c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d68010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d68010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d68014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d68014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d68018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d68018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6801c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d68020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d68020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68024: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d68024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d68028: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D68028u;
    SET_GPR_U32(ctx, 31, 0x1D68030u);
    ctx->pc = 0x1D6802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68028u;
    // 0x1d6802c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D68028u, 0x1D68030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68030u;
label_1d68030:
    // 0x1d68030: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d68030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68034: 0xc7599d6  jal         func_1D66758
    ctx->pc = 0x1D68034u;
    SET_GPR_U32(ctx, 31, 0x1D6803Cu);
    ctx->pc = 0x1D68038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68034u;
    // 0x1d68038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66758u, 0x1D68034u, 0x1D6803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6803Cu;
label_1d6803c:
    // 0x1d6803c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d6803cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d68040: 0xa24f0950  sb          $t7, 0x950($s2)
    ctx->pc = 0x1d68040u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d68044: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d68044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d68048:
    // 0x1d68048: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D68048u;
    SET_GPR_U32(ctx, 31, 0x1D68050u);
    ctx->pc = 0x1D6804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68048u;
    // 0x1d6804c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D68048u, 0x1D68050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68050u;
label_1d68050:
    // 0x1d68050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D68050u;
    {
        const bool branch_taken_0x1d68050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68050u;
        // 0x1d68054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68050) {
            ctx->pc = 0x1D68064u;
            goto label_1d68064;
        }
    }
    ctx->pc = 0x1D68058u;
    // 0x1d68058: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D68058u;
    SET_GPR_U32(ctx, 31, 0x1D68060u);
    ctx->pc = 0x1D6805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68058u;
    // 0x1d6805c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D68058u, 0x1D68060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68060u;
label_1d68060:
    // 0x1d68060: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1d68060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1d68064:
    // 0x1d68064: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d68064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d68068: 0x2a2f0003  slti        $t7, $s1, 0x3
    ctx->pc = 0x1d68068u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d6806c: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D6806Cu;
    {
        const bool branch_taken_0x1d6806c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6806c) {
            ctx->pc = 0x1D68070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6806Cu;
            // 0x1d68070: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D68048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d68048;
        }
    }
    ctx->pc = 0x1D68074u;
    // 0x1d68074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d68074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d68078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d68080: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d68080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d68084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d68084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68088: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d68088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6808c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d68090: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d68090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d68094: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d68094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d68098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d68098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6809c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d6809cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d680a0: 0x8759c64  j           func_1D67190
    ctx->pc = 0x1D680A0u;
    ctx->pc = 0x1D680A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D680A0u;
    // 0x1d680a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67190u;
    sub_01D67190_0x1d67190(rdram, ctx, runtime); return;
    ctx->pc = 0x1D680A8u;
    // 0x1d680a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D680A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D680A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D680B0u;
}
