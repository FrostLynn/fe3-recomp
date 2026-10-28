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

// Function: sub_01CDBE98
// Address: 0x1cdbe98 - 0x1cdbf20
void sub_01CDBE98_0x1cdbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBE98_0x1cdbe98");
#endif

    switch (ctx->pc) {
        case 0x1cdbeb4u: goto label_1cdbeb4;
        case 0x1cdbeecu: goto label_1cdbeec;
        case 0x1cdbf00u: goto label_1cdbf00;
        default: break;
    }

    ctx->pc = 0x1cdbe98u;

    // 0x1cdbe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdbea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdbea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdbea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbea8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdbea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdbeac: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDBEACu;
    SET_GPR_U32(ctx, 31, 0x1CDBEB4u);
    ctx->pc = 0x1CDBEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBEACu;
    // 0x1cdbeb0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDBEACu, 0x1CDBEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBEB4u;
label_1cdbeb4:
    // 0x1cdbeb4: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cdbeb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdbeb8: 0x25effff8  addiu       $t7, $t7, -0x8
    ctx->pc = 0x1cdbeb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
    // 0x1cdbebc: 0x2dee0018  sltiu       $t6, $t7, 0x18
    ctx->pc = 0x1cdbebcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cdbec0: 0x11c0001b  beqz        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CDBEC0u;
    {
        const bool branch_taken_0x1cdbec0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBEC0u;
        // 0x1cdbec4: 0x3c0e01ce  lui         $t6, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbec0) {
            ctx->pc = 0x1CDBF30u;
            return;
        }
    }
    ctx->pc = 0x1CDBEC8u;
    // 0x1cdbec8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cdbec8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cdbecc: 0x25cee830  addiu       $t6, $t6, -0x17D0
    ctx->pc = 0x1cdbeccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961200));
    // 0x1cdbed0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cdbed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cdbed4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cdbed4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdbed8: 0x1a00008  jr          $t5
    ctx->pc = 0x1CDBED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDBEE0u: goto label_1cdbee0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CDBEE0u;
label_1cdbee0:
    // 0x1cdbee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbee4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbee8: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1cdbee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1cdbeec:
    // 0x1cdbeec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdbeecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdbef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbef4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdbef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbef8: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDBEF8u;
    SET_GPR_U32(ctx, 31, 0x1CDBF00u);
    ctx->pc = 0x1CDBEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBEF8u;
    // 0x1cdbefc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDBEF8u, 0x1CDBF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBF00u;
label_1cdbf00:
    // 0x1cdbf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdbf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbf08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbf08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbf0c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x1cdbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x1cdbf10: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x1cdbf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1cdbf14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdbf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbf18: 0x8736b6c  j           func_1CDADB0
    ctx->pc = 0x1CDBF18u;
    ctx->pc = 0x1CDBF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF18u;
    // 0x1cdbf1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDADB0u;
    sub_01CDADB0_0x1cdadb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBF20u;
}
