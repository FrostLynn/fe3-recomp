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

// Function: sub_01C8DC10
// Address: 0x1c8dc10 - 0x1c8dcf0
void sub_01C8DC10_0x1c8dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DC10_0x1c8dc10");
#endif

    switch (ctx->pc) {
        case 0x1c8dc24u: goto label_1c8dc24;
        case 0x1c8dc38u: goto label_1c8dc38;
        case 0x1c8dc3cu: goto label_1c8dc3c;
        case 0x1c8dc58u: goto label_1c8dc58;
        case 0x1c8dc64u: goto label_1c8dc64;
        case 0x1c8dc94u: goto label_1c8dc94;
        case 0x1c8dcc0u: goto label_1c8dcc0;
        case 0x1c8dcccu: goto label_1c8dccc;
        default: break;
    }

    ctx->pc = 0x1c8dc10u;

    // 0x1c8dc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8dc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8dc18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8dc1c: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8DC1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DC24u);
    ctx->pc = 0x1C8DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DC1Cu;
    // 0x1c8dc20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8DC1Cu, 0x1C8DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DC24u;
label_1c8dc24:
    // 0x1c8dc24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8dc24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8dc28: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DC28u;
    {
        const bool branch_taken_0x1c8dc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC28u;
        // 0x1c8dc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc28) {
            ctx->pc = 0x1C8DC4Cu;
            goto label_1c8dc4c;
        }
    }
    ctx->pc = 0x1C8DC30u;
    // 0x1c8dc30: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8DC30u;
    SET_GPR_U32(ctx, 31, 0x1C8DC38u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8DC30u, 0x1C8DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DC38u;
label_1c8dc38:
    // 0x1c8dc38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8dc3c:
    // 0x1c8dc3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8dc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dc40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8dc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC44u;
        // 0x1c8dc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DC4Cu;
label_1c8dc4c:
    // 0x1c8dc4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8dc50: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DC50u;
    SET_GPR_U32(ctx, 31, 0x1C8DC58u);
    ctx->pc = 0x1C8DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DC50u;
    // 0x1c8dc54: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DC50u, 0x1C8DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DC58u;
label_1c8dc58:
    // 0x1c8dc58: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c8dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c8dc5c: 0xc7233e4  jal         func_1C8CF90
    ctx->pc = 0x1C8DC5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DC64u);
    ctx->pc = 0x1C8DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DC5Cu;
    // 0x1c8dc60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF90u, 0x1C8DC5Cu, 0x1C8DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DC64u;
label_1c8dc64:
    // 0x1c8dc64: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C8DC64u;
    {
        const bool branch_taken_0x1c8dc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC64u;
        // 0x1c8dc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc64) {
            ctx->pc = 0x1C8DC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8dc3c;
        }
    }
    ctx->pc = 0x1C8DC6Cu;
    // 0x1c8dc6c: 0x0  nop
    ctx->pc = 0x1c8dc6cu;
    // NOP
    // 0x1c8dc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8dc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8dc78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8dc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8dc7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8dc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8dc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dc84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8dc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dc88: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8dc8c: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DC8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DC94u);
    ctx->pc = 0x1C8DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DC8Cu;
    // 0x1c8dc90: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DC8Cu, 0x1C8DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DC94u;
label_1c8dc94:
    // 0x1c8dc94: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c8dc94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c8dc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dc9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8dc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8dca0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8dca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dca4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8dca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8dca8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8dca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8dcac: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c8dcacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c8dcb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8dcb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dcb4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8dcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8dcb8: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8DCB8u;
    SET_GPR_U32(ctx, 31, 0x1C8DCC0u);
    ctx->pc = 0x1C8DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DCB8u;
    // 0x1c8dcbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8DCB8u, 0x1C8DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DCC0u;
label_1c8dcc0:
    // 0x1c8dcc0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8dcc4: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DCC4u;
    SET_GPR_U32(ctx, 31, 0x1C8DCCCu);
    ctx->pc = 0x1C8DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DCC4u;
    // 0x1c8dcc8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DCC4u, 0x1C8DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DCCCu;
label_1c8dccc:
    // 0x1c8dccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dcd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8dcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8dcd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8dcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dcd8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c8dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c8dcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8dcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8dce0: 0x87233e6  j           func_1C8CF98
    ctx->pc = 0x1C8DCE0u;
    ctx->pc = 0x1C8DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DCE0u;
    // 0x1c8dce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF98u;
    sub_01C8CF98_0x1c8cf98(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8DCE8u;
    // 0x1c8dce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DCF0u;
}
