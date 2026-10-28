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

// Function: sub_01CDBDA0
// Address: 0x1cdbda0 - 0x1cdbe28
void sub_01CDBDA0_0x1cdbda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBDA0_0x1cdbda0");
#endif

    switch (ctx->pc) {
        case 0x1cdbdbcu: goto label_1cdbdbc;
        case 0x1cdbdf4u: goto label_1cdbdf4;
        case 0x1cdbe08u: goto label_1cdbe08;
        default: break;
    }

    ctx->pc = 0x1cdbda0u;

    // 0x1cdbda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbda8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdbdac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdbdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbdb0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdbdb4: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDBDB4u;
    SET_GPR_U32(ctx, 31, 0x1CDBDBCu);
    ctx->pc = 0x1CDBDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBDB4u;
    // 0x1cdbdb8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDBDB4u, 0x1CDBDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBDBCu;
label_1cdbdbc:
    // 0x1cdbdbc: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cdbdbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdbdc0: 0x25effff8  addiu       $t7, $t7, -0x8
    ctx->pc = 0x1cdbdc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
    // 0x1cdbdc4: 0x2dee0018  sltiu       $t6, $t7, 0x18
    ctx->pc = 0x1cdbdc4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cdbdc8: 0x11c0001b  beqz        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CDBDC8u;
    {
        const bool branch_taken_0x1cdbdc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBDC8u;
        // 0x1cdbdcc: 0x3c0e01ce  lui         $t6, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbdc8) {
            ctx->pc = 0x1CDBE38u;
            return;
        }
    }
    ctx->pc = 0x1CDBDD0u;
    // 0x1cdbdd0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cdbdd0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cdbdd4: 0x25cee7d0  addiu       $t6, $t6, -0x1830
    ctx->pc = 0x1cdbdd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961104));
    // 0x1cdbdd8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cdbdd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cdbddc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cdbddcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdbde0: 0x1a00008  jr          $t5
    ctx->pc = 0x1CDBDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDBDE8u: goto label_1cdbde8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBDE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CDBDE8u;
label_1cdbde8:
    // 0x1cdbde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbdf0: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1cdbdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1cdbdf4:
    // 0x1cdbdf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdbdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbdf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdbdf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbdfc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdbdfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbe00: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDBE00u;
    SET_GPR_U32(ctx, 31, 0x1CDBE08u);
    ctx->pc = 0x1CDBE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE00u;
    // 0x1cdbe04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDBE00u, 0x1CDBE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBE08u;
label_1cdbe08:
    // 0x1cdbe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdbe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbe10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbe14: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x1cdbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1cdbe18: 0x240600d5  addiu       $a2, $zero, 0xD5
    ctx->pc = 0x1cdbe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x1cdbe1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdbe1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe20: 0x8736b6c  j           func_1CDADB0
    ctx->pc = 0x1CDBE20u;
    ctx->pc = 0x1CDBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE20u;
    // 0x1cdbe24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDADB0u;
    sub_01CDADB0_0x1cdadb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBE28u;
}
