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

// Function: sub_01C8DE40
// Address: 0x1c8de40 - 0x1c8df08
void sub_01C8DE40_0x1c8de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DE40_0x1c8de40");
#endif

    switch (ctx->pc) {
        case 0x1c8de5cu: goto label_1c8de5c;
        case 0x1c8de6cu: goto label_1c8de6c;
        case 0x1c8de78u: goto label_1c8de78;
        case 0x1c8de88u: goto label_1c8de88;
        case 0x1c8dea0u: goto label_1c8dea0;
        case 0x1c8deccu: goto label_1c8decc;
        default: break;
    }

    ctx->pc = 0x1c8de40u;

    // 0x1c8de40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8de44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8de48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8de4c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8de50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8de50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8de54: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DE54u;
    SET_GPR_U32(ctx, 31, 0x1C8DE5Cu);
    ctx->pc = 0x1C8DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE54u;
    // 0x1c8de58: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DE54u, 0x1C8DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DE5Cu;
label_1c8de5c:
    // 0x1c8de5c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8de5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8de60: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8de64: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8DE64u;
    SET_GPR_U32(ctx, 31, 0x1C8DE6Cu);
    ctx->pc = 0x1C8DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE64u;
    // 0x1c8de68: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8DE64u, 0x1C8DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DE6Cu;
label_1c8de6c:
    // 0x1c8de6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8de6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8de70: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DE70u;
    SET_GPR_U32(ctx, 31, 0x1C8DE78u);
    ctx->pc = 0x1C8DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE70u;
    // 0x1c8de74: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DE70u, 0x1C8DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DE78u;
label_1c8de78:
    // 0x1c8de78: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8de78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8de7c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8de80: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8DE80u;
    SET_GPR_U32(ctx, 31, 0x1C8DE88u);
    ctx->pc = 0x1C8DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE80u;
    // 0x1c8de84: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8DE80u, 0x1C8DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DE88u;
label_1c8de88:
    // 0x1c8de88: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c8de88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c8de8c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C8DE8Cu;
    {
        const bool branch_taken_0x1c8de8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8de8c) {
            ctx->pc = 0x1C8DE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DE8Cu;
            // 0x1c8de90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DEF4u;
            goto label_1c8def4;
        }
    }
    ctx->pc = 0x1C8DE94u;
    // 0x1c8de94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8de94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8de98: 0xc7233e8  jal         func_1C8CFA0
    ctx->pc = 0x1C8DE98u;
    SET_GPR_U32(ctx, 31, 0x1C8DEA0u);
    ctx->pc = 0x1C8DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE98u;
    // 0x1c8de9c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFA0u, 0x1C8DE98u, 0x1C8DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DEA0u;
label_1c8dea0:
    // 0x1c8dea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8dea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8dea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8deac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8deacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8deb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8deb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8deb4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8deb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8deb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c8deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c8debc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8DEBCu;
    {
        const bool branch_taken_0x1c8debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DEBCu;
        // 0x1c8dec0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8debc) {
            ctx->pc = 0x1C8DEF0u;
            goto label_1c8def0;
        }
    }
    ctx->pc = 0x1C8DEC4u;
    // 0x1c8dec4: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8DEC4u;
    SET_GPR_U32(ctx, 31, 0x1C8DECCu);
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8DEC4u, 0x1C8DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DECCu;
label_1c8decc:
    // 0x1c8decc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8deccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ded0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c8ded0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8ded4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c8ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c8ded8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c8ded8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c8dedc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c8dedcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8dee0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8DEE0u;
    {
        const bool branch_taken_0x1c8dee0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DEE0u;
        // 0x1c8dee4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dee0) {
            ctx->pc = 0x1C8DEF4u;
            goto label_1c8def4;
        }
    }
    ctx->pc = 0x1C8DEE8u;
    // 0x1c8dee8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c8dee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8deec: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c8deecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c8def0:
    // 0x1c8def0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8def0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8def4:
    // 0x1c8def4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8def4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8def8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8def8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8defc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DEFCu;
        // 0x1c8df00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DF04u;
    // 0x1c8df04: 0x0  nop
    ctx->pc = 0x1c8df04u;
    // NOP
    ctx->pc = 0x1c8df08u;
}
