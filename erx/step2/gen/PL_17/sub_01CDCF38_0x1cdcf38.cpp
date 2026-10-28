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

// Function: sub_01CDCF38
// Address: 0x1cdcf38 - 0x1cdd070
void sub_01CDCF38_0x1cdcf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCF38_0x1cdcf38");
#endif

    switch (ctx->pc) {
        case 0x1cdcf48u: goto label_1cdcf48;
        case 0x1cdcf58u: goto label_1cdcf58;
        case 0x1cdcf68u: goto label_1cdcf68;
        case 0x1cdcf78u: goto label_1cdcf78;
        case 0x1cdcf88u: goto label_1cdcf88;
        case 0x1cdcfb4u: goto label_1cdcfb4;
        case 0x1cdcfc4u: goto label_1cdcfc4;
        case 0x1cdcfd0u: goto label_1cdcfd0;
        case 0x1cdcfe0u: goto label_1cdcfe0;
        case 0x1cdcff0u: goto label_1cdcff0;
        case 0x1cdcff8u: goto label_1cdcff8;
        case 0x1cdd00cu: goto label_1cdd00c;
        case 0x1cdd014u: goto label_1cdd014;
        case 0x1cdd018u: goto label_1cdd018;
        case 0x1cdd044u: goto label_1cdd044;
        case 0x1cdd050u: goto label_1cdd050;
        default: break;
    }

    ctx->pc = 0x1cdcf38u;

    // 0x1cdcf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf40: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CDCF40u;
    {
        const bool branch_taken_0x1cdcf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF40u;
        // 0x1cdcf44: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf40) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF48u;
label_1cdcf48:
    // 0x1cdcf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf50: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1CDCF50u;
    {
        const bool branch_taken_0x1cdcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF50u;
        // 0x1cdcf54: 0x2406016e  addiu       $a2, $zero, 0x16E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf50) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF58u;
label_1cdcf58:
    // 0x1cdcf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf60: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x1CDCF60u;
    {
        const bool branch_taken_0x1cdcf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF60u;
        // 0x1cdcf64: 0x24060176  addiu       $a2, $zero, 0x176 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf60) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF68u;
label_1cdcf68:
    // 0x1cdcf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf70: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1CDCF70u;
    {
        const bool branch_taken_0x1cdcf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF70u;
        // 0x1cdcf74: 0x240601d1  addiu       $a2, $zero, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 465));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf70) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF78u;
label_1cdcf78:
    // 0x1cdcf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf80: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1CDCF80u;
    {
        const bool branch_taken_0x1cdcf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF80u;
        // 0x1cdcf84: 0x2406018f  addiu       $a2, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf80) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF88u;
label_1cdcf88:
    // 0x1cdcf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf90: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x1CDCF90u;
    {
        const bool branch_taken_0x1cdcf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF90u;
        // 0x1cdcf94: 0x24060196  addiu       $a2, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcf90) {
            ctx->pc = 0x1CDCEC0u;
            return;
        }
    }
    ctx->pc = 0x1CDCF98u;
    // 0x1cdcf98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcf9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdcf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdcfa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdcfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdcfa4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdcfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdcfa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdcfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcfac: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCFACu;
    SET_GPR_U32(ctx, 31, 0x1CDCFB4u);
    ctx->pc = 0x1CDCFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFACu;
    // 0x1cdcfb0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCFACu, 0x1CDCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFB4u;
label_1cdcfb4:
    // 0x1cdcfb4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdcfb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdcfb8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdcfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdcfbc: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDCFBCu;
    SET_GPR_U32(ctx, 31, 0x1CDCFC4u);
    ctx->pc = 0x1CDCFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFBCu;
    // 0x1cdcfc0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDCFBCu, 0x1CDCFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFC4u;
label_1cdcfc4:
    // 0x1cdcfc4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdcfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdcfc8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCFC8u;
    SET_GPR_U32(ctx, 31, 0x1CDCFD0u);
    ctx->pc = 0x1CDCFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFC8u;
    // 0x1cdcfcc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCFC8u, 0x1CDCFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFD0u;
label_1cdcfd0:
    // 0x1cdcfd0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdcfd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdcfd4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdcfd8: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDCFD8u;
    SET_GPR_U32(ctx, 31, 0x1CDCFE0u);
    ctx->pc = 0x1CDCFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFD8u;
    // 0x1cdcfdc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDCFD8u, 0x1CDCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFE0u;
label_1cdcfe0:
    // 0x1cdcfe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdcfe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdcfe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcfe8: 0xc736890  jal         func_1CDA240
    ctx->pc = 0x1CDCFE8u;
    SET_GPR_U32(ctx, 31, 0x1CDCFF0u);
    ctx->pc = 0x1CDCFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFE8u;
    // 0x1cdcfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA240u, 0x1CDCFE8u, 0x1CDCFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFF0u;
label_1cdcff0:
    // 0x1cdcff0: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDCFF0u;
    SET_GPR_U32(ctx, 31, 0x1CDCFF8u);
    ctx->pc = 0x1CDCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCFF0u;
    // 0x1cdcff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDCFF0u, 0x1CDCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCFF8u;
label_1cdcff8:
    // 0x1cdcff8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdcff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcffc: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CDCFFCu;
    {
        const bool branch_taken_0x1cdcffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCFFCu;
        // 0x1cdd000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcffc) {
            ctx->pc = 0x1CDD028u;
            goto label_1cdd028;
        }
    }
    ctx->pc = 0x1CDD004u;
    // 0x1cdd004: 0xc7368ac  jal         func_1CDA2B0
    ctx->pc = 0x1CDD004u;
    SET_GPR_U32(ctx, 31, 0x1CDD00Cu);
    ctx->pc = 0x1CDA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA2B0u, 0x1CDD004u, 0x1CDD00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD00Cu;
label_1cdd00c:
    // 0x1cdd00c: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDD00Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD014u);
    ctx->pc = 0x1CDD010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD00Cu;
    // 0x1cdd010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDD00Cu, 0x1CDD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD014u;
label_1cdd014:
    // 0x1cdd014: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdd014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdd018:
    // 0x1cdd018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd01c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd020: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD020u;
        // 0x1cdd024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD028u;
label_1cdd028:
    // 0x1cdd028: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CDD028u;
    {
        const bool branch_taken_0x1cdd028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD028u;
        // 0x1cdd02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd028) {
            ctx->pc = 0x1CDD018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd018;
        }
    }
    ctx->pc = 0x1CDD030u;
    // 0x1cdd030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdd038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdd03c: 0xc7368a0  jal         func_1CDA280
    ctx->pc = 0x1CDD03Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD044u);
    ctx->pc = 0x1CDD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD03Cu;
    // 0x1cdd040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA280u, 0x1CDD03Cu, 0x1CDD044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD044u;
label_1cdd044:
    // 0x1cdd044: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdd044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdd048: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDD048u;
    SET_GPR_U32(ctx, 31, 0x1CDD050u);
    ctx->pc = 0x1CDD04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD048u;
    // 0x1cdd04c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDD048u, 0x1CDD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD050u;
label_1cdd050:
    // 0x1cdd050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdd050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd058: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd058u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd060: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1cdd060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cdd064: 0x8736b4c  j           func_1CDAD30
    ctx->pc = 0x1CDD064u;
    ctx->pc = 0x1CDD068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD064u;
    // 0x1cdd068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD30u;
    sub_01CDAD30_0x1cdad30(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD06Cu;
    // 0x1cdd06c: 0x0  nop
    ctx->pc = 0x1cdd06cu;
    // NOP
    ctx->pc = 0x1cdd070u;
}
