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

// Function: sub_01C20BF8
// Address: 0x1c20bf8 - 0x1c20d24
void sub_01C20BF8_0x1c20bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20BF8_0x1c20bf8");
#endif

    switch (ctx->pc) {
        case 0x1c20c14u: goto label_1c20c14;
        case 0x1c20c1cu: goto label_1c20c1c;
        case 0x1c20c30u: goto label_1c20c30;
        case 0x1c20c38u: goto label_1c20c38;
        case 0x1c20c3cu: goto label_1c20c3c;
        case 0x1c20c78u: goto label_1c20c78;
        case 0x1c20cb8u: goto label_1c20cb8;
        case 0x1c20cccu: goto label_1c20ccc;
        case 0x1c20cd8u: goto label_1c20cd8;
        case 0x1c20ce4u: goto label_1c20ce4;
        case 0x1c20cf8u: goto label_1c20cf8;
        case 0x1c20d08u: goto label_1c20d08;
        default: break;
    }

    ctx->pc = 0x1c20bf8u;

    // 0x1c20bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20bfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20c00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c20c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c20c0c: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C20C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C20C14u);
    ctx->pc = 0x1C20C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20C0Cu;
    // 0x1c20c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C20C0Cu, 0x1C20C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C14u;
label_1c20c14:
    // 0x1c20c14: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C20C14u;
    SET_GPR_U32(ctx, 31, 0x1C20C1Cu);
    ctx->pc = 0x1C20C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20C14u;
    // 0x1c20c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C20C14u, 0x1C20C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C1Cu;
label_1c20c1c:
    // 0x1c20c1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c20c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20c20: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C20C20u;
    {
        const bool branch_taken_0x1c20c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C20C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C20u;
        // 0x1c20c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20c20) {
            ctx->pc = 0x1C20C4Cu;
            goto label_1c20c4c;
        }
    }
    ctx->pc = 0x1C20C28u;
    // 0x1c20c28: 0xc707c70  jal         func_1C1F1C0
    ctx->pc = 0x1C20C28u;
    SET_GPR_U32(ctx, 31, 0x1C20C30u);
    ctx->pc = 0x1C1F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1C0u, 0x1C20C28u, 0x1C20C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C30u;
label_1c20c30:
    // 0x1c20c30: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C20C30u;
    SET_GPR_U32(ctx, 31, 0x1C20C38u);
    ctx->pc = 0x1C20C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20C30u;
    // 0x1c20c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C20C30u, 0x1C20C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C38u;
label_1c20c38:
    // 0x1c20c38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c20c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c20c3c:
    // 0x1c20c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20c40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c20c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20c44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C44u;
        // 0x1c20c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20C4Cu;
label_1c20c4c:
    // 0x1c20c4c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C20C4Cu;
    {
        const bool branch_taken_0x1c20c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C4Cu;
        // 0x1c20c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20c4c) {
            ctx->pc = 0x1C20C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c20c3c;
        }
    }
    ctx->pc = 0x1C20C54u;
    // 0x1c20c54: 0x0  nop
    ctx->pc = 0x1c20c54u;
    // NOP
    // 0x1c20c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c6c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c20c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c20c70: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C20C70u;
    SET_GPR_U32(ctx, 31, 0x1C20C78u);
    ctx->pc = 0x1C20C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20C70u;
    // 0x1c20c74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C20C70u, 0x1C20C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C78u;
label_1c20c78:
    // 0x1c20c78: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c20c78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c20c7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c20c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c80: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1c20c80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x1c20c84: 0x2dcf001c  sltiu       $t7, $t6, 0x1C
    ctx->pc = 0x1c20c84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1c20c88: 0x11e00046  beqz        $t7, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C20C88u;
    {
        const bool branch_taken_0x1c20c88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C88u;
        // 0x1c20c8c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20c88) {
            ctx->pc = 0x1C20DA4u;
            return;
        }
    }
    ctx->pc = 0x1C20C90u;
    // 0x1c20c90: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c20c90u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c20c94: 0x3c0e01c2  lui         $t6, 0x1C2
    ctx->pc = 0x1c20c94u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
    // 0x1c20c98: 0x25ce3230  addiu       $t6, $t6, 0x3230
    ctx->pc = 0x1c20c98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12848));
    // 0x1c20c9c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c20c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c20ca0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c20ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c20ca4: 0x1a00008  jr          $t5
    ctx->pc = 0x1C20CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C20CACu: goto label_1c20cac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20CA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C20CACu;
label_1c20cac:
    // 0x1c20cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20cb4: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1c20cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1c20cb8:
    // 0x1c20cb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c20cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c20cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20cc0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c20cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20cc4: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C20CC4u;
    SET_GPR_U32(ctx, 31, 0x1C20CCCu);
    ctx->pc = 0x1C20CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20CC4u;
    // 0x1c20cc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C20CC4u, 0x1C20CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20CCCu;
label_1c20ccc:
    // 0x1c20ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20cd0: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C20CD0u;
    SET_GPR_U32(ctx, 31, 0x1C20CD8u);
    ctx->pc = 0x1C20CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20CD0u;
    // 0x1c20cd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C20CD0u, 0x1C20CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20CD8u;
label_1c20cd8:
    // 0x1c20cd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c20cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c20cdc: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20CDCu;
    SET_GPR_U32(ctx, 31, 0x1C20CE4u);
    ctx->pc = 0x1C20CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20CDCu;
    // 0x1c20ce0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20CDCu, 0x1C20CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20CE4u;
label_1c20ce4:
    // 0x1c20ce4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c20ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c20ce8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c20ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c20cec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c20cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20cf0: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C20CF0u;
    SET_GPR_U32(ctx, 31, 0x1C20CF8u);
    ctx->pc = 0x1C20CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20CF0u;
    // 0x1c20cf4: 0x240500a7  addiu       $a1, $zero, 0xA7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C20CF0u, 0x1C20CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20CF8u;
label_1c20cf8:
    // 0x1c20cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d00: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C20D00u;
    SET_GPR_U32(ctx, 31, 0x1C20D08u);
    ctx->pc = 0x1C20D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20D00u;
    // 0x1c20d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C20D00u, 0x1C20D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20D08u;
label_1c20d08:
    // 0x1c20d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c20d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20d14: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c20d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c20d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c20d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20d1c: 0x8707c62  j           func_1C1F188
    ctx->pc = 0x1C20D1Cu;
    ctx->pc = 0x1C20D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20D1Cu;
    // 0x1c20d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    sub_01C1F188_0x1c1f188(rdram, ctx, runtime); return;
    ctx->pc = 0x1C20D24u;
}
