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

// Function: sub_01CDBD00
// Address: 0x1cdbd00 - 0x1cdbd60
void sub_01CDBD00_0x1cdbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBD00_0x1cdbd00");
#endif

    switch (ctx->pc) {
        case 0x1cdbd1cu: goto label_1cdbd1c;
        case 0x1cdbd3cu: goto label_1cdbd3c;
        default: break;
    }

    ctx->pc = 0x1cdbd00u;

    // 0x1cdbd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbd04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdbd08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbd0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdbd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdbd10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdbd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd14: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDBD14u;
    SET_GPR_U32(ctx, 31, 0x1CDBD1Cu);
    ctx->pc = 0x1CDBD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBD14u;
    // 0x1cdbd18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDBD14u, 0x1CDBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBD1Cu;
label_1cdbd1c:
    // 0x1cdbd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdbd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdbd28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdbd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbd2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdbd2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd30: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdbd30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbd34: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDBD34u;
    SET_GPR_U32(ctx, 31, 0x1CDBD3Cu);
    ctx->pc = 0x1CDBD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBD34u;
    // 0x1cdbd38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDBD34u, 0x1CDBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBD3Cu;
label_1cdbd3c:
    // 0x1cdbd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdbd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbd48: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x1cdbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1cdbd4c: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x1cdbd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1cdbd50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdbd50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbd54: 0x8736b6c  j           func_1CDADB0
    ctx->pc = 0x1CDBD54u;
    ctx->pc = 0x1CDBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBD54u;
    // 0x1cdbd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDADB0u;
    sub_01CDADB0_0x1cdadb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBD5Cu;
    // 0x1cdbd5c: 0x0  nop
    ctx->pc = 0x1cdbd5cu;
    // NOP
    ctx->pc = 0x1cdbd60u;
}
