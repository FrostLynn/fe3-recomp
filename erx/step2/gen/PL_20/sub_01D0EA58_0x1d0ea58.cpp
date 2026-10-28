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

// Function: sub_01D0EA58
// Address: 0x1d0ea58 - 0x1d0eb10
void sub_01D0EA58_0x1d0ea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EA58_0x1d0ea58");
#endif

    switch (ctx->pc) {
        case 0x1d0ea7cu: goto label_1d0ea7c;
        case 0x1d0ea8cu: goto label_1d0ea8c;
        case 0x1d0ea9cu: goto label_1d0ea9c;
        case 0x1d0eaf4u: goto label_1d0eaf4;
        default: break;
    }

    ctx->pc = 0x1d0ea58u;

    // 0x1d0ea58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ea58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ea5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0ea60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0ea64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0ea68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0ea68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0ea70: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0ea74: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0EA74u;
    SET_GPR_U32(ctx, 31, 0x1D0EA7Cu);
    ctx->pc = 0x1D0EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA74u;
    // 0x1d0ea78: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0EA74u, 0x1D0EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EA7Cu;
label_1d0ea7c:
    // 0x1d0ea7c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0ea80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0ea80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea84: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0EA84u;
    SET_GPR_U32(ctx, 31, 0x1D0EA8Cu);
    ctx->pc = 0x1D0EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA84u;
    // 0x1d0ea88: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0EA84u, 0x1D0EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EA8Cu;
label_1d0ea8c:
    // 0x1d0ea8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0ea90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d0ea90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea94: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0EA94u;
    SET_GPR_U32(ctx, 31, 0x1D0EA9Cu);
    ctx->pc = 0x1D0EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA94u;
    // 0x1d0ea98: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0EA94u, 0x1D0EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EA9Cu;
label_1d0ea9c:
    // 0x1d0ea9c: 0x8c4f03a4  lw          $t7, 0x3A4($v0)
    ctx->pc = 0x1d0ea9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1d0eaa0: 0x25eefea5  addiu       $t6, $t7, -0x15B
    ctx->pc = 0x1d0eaa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966949));
    // 0x1d0eaa4: 0x29ef0156  slti        $t7, $t7, 0x156
    ctx->pc = 0x1d0eaa4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)342) ? 1 : 0);
    // 0x1d0eaa8: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0EAA8u;
    {
        const bool branch_taken_0x1d0eaa8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EAA8u;
        // 0x1d0eaac: 0x2dce0003  sltiu       $t6, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eaa8) {
            ctx->pc = 0x1D0EAF4u;
            goto label_1d0eaf4;
        }
    }
    ctx->pc = 0x1D0EAB0u;
    // 0x1d0eab0: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D0EAB0u;
    {
        const bool branch_taken_0x1d0eab0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EAB0u;
        // 0x1d0eab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eab0) {
            ctx->pc = 0x1D0EAF8u;
            goto label_1d0eaf8;
        }
    }
    ctx->pc = 0x1D0EAB8u;
    // 0x1d0eab8: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1d0eab8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1d0eabc: 0x29ef0009  slti        $t7, $t7, 0x9
    ctx->pc = 0x1d0eabcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d0eac0: 0x55e0000e  bnel        $t7, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D0EAC0u;
    {
        const bool branch_taken_0x1d0eac0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0eac0) {
            ctx->pc = 0x1D0EAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0EAC0u;
            // 0x1d0eac4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0EAFCu;
            goto label_1d0eafc;
        }
    }
    ctx->pc = 0x1D0EAC8u;
    // 0x1d0eac8: 0x8e4f081c  lw          $t7, 0x81C($s2)
    ctx->pc = 0x1d0eac8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2076)));
    // 0x1d0eacc: 0x19e0000a  blez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0EACCu;
    {
        const bool branch_taken_0x1d0eacc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1D0EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EACCu;
        // 0x1d0ead0: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eacc) {
            ctx->pc = 0x1D0EAF8u;
            goto label_1d0eaf8;
        }
    }
    ctx->pc = 0x1D0EAD4u;
    // 0x1d0ead4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d0ead4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0ead8: 0xc5e108d8  lwc1        $f1, 0x8D8($t7)
    ctx->pc = 0x1d0ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0eadc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0eadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d0eae0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d0eae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0eae4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0EAE4u;
    {
        const bool branch_taken_0x1d0eae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EAE4u;
        // 0x1d0eae8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eae4) {
            ctx->pc = 0x1D0EAFCu;
            goto label_1d0eafc;
        }
    }
    ctx->pc = 0x1D0EAECu;
    // 0x1d0eaec: 0xc743a70  jal         func_1D0E9C0
    ctx->pc = 0x1D0EAECu;
    SET_GPR_U32(ctx, 31, 0x1D0EAF4u);
    ctx->pc = 0x1D0EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EAECu;
    // 0x1d0eaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E9C0u, 0x1D0EAECu, 0x1D0EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EAF4u;
label_1d0eaf4:
    // 0x1d0eaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0eaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0eaf8:
    // 0x1d0eaf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0eaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d0eafc:
    // 0x1d0eafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0eafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0eb00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0eb00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0eb04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0eb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0eb08: 0x8743a0e  j           func_1D0E838
    ctx->pc = 0x1D0EB08u;
    ctx->pc = 0x1D0EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB08u;
    // 0x1d0eb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E838u;
    sub_01D0E838_0x1d0e838(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0EB10u;
}
