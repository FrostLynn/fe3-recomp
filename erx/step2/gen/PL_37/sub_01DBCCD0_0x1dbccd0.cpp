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

// Function: sub_01DBCCD0
// Address: 0x1dbccd0 - 0x1dbcd40
void sub_01DBCCD0_0x1dbccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCCD0_0x1dbccd0");
#endif

    switch (ctx->pc) {
        case 0x1dbccf8u: goto label_1dbccf8;
        case 0x1dbcd28u: goto label_1dbcd28;
        default: break;
    }

    ctx->pc = 0x1dbccd0u;

    // 0x1dbccd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbccd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dbccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dbccd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dbccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dbccdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dbccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dbcce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbcce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcce4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dbcce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dbcce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbcce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbccec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbccecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbccf0: 0xc76ef3a  jal         func_1DBBCE8
    ctx->pc = 0x1DBCCF0u;
    SET_GPR_U32(ctx, 31, 0x1DBCCF8u);
    ctx->pc = 0x1DBCCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCCF0u;
    // 0x1dbccf4: 0x24a50160  addiu       $a1, $a1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCE8u, 0x1DBCCF0u, 0x1DBCCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCCF8u;
label_1dbccf8:
    // 0x1dbccf8: 0x260f00e0  addiu       $t7, $s0, 0xE0
    ctx->pc = 0x1dbccf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1dbccfc: 0x8e0d00e0  lw          $t5, 0xE0($s0)
    ctx->pc = 0x1dbccfcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1dbcd00: 0x8dec000c  lw          $t4, 0xC($t7)
    ctx->pc = 0x1dbcd00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x1dbcd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbcd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd08: 0x8dee0008  lw          $t6, 0x8($t7)
    ctx->pc = 0x1dbcd08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x1dbcd0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dbcd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dbcd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcd14: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1dbcd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1dbcd18: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x1dbcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    // 0x1dbcd1c: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x1dbcd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x1dbcd20: 0xc76ef38  jal         func_1DBBCE0
    ctx->pc = 0x1DBCD20u;
    SET_GPR_U32(ctx, 31, 0x1DBCD28u);
    ctx->pc = 0x1DBCD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD20u;
    // 0x1dbcd24: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCE0u, 0x1DBCD20u, 0x1DBCD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCD28u;
label_1dbcd28:
    // 0x1dbcd28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dbcd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbcd2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dbcd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbcd30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dbcd30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbcd34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dbcd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbcd38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBCD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCD38u;
        // 0x1dbcd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCD40u;
}
