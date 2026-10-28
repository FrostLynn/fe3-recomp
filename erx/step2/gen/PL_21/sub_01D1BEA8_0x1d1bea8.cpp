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

// Function: sub_01D1BEA8
// Address: 0x1d1bea8 - 0x1d1bf2c
void sub_01D1BEA8_0x1d1bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BEA8_0x1d1bea8");
#endif

    switch (ctx->pc) {
        case 0x1d1bf08u: goto label_1d1bf08;
        case 0x1d1bf0cu: goto label_1d1bf0c;
        default: break;
    }

    ctx->pc = 0x1d1bea8u;

    // 0x1d1bea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1beac: 0x2484fee7  addiu       $a0, $a0, -0x119
    ctx->pc = 0x1d1beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967015));
    // 0x1d1beb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1beb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1beb4: 0x2c8f0005  sltiu       $t7, $a0, 0x5
    ctx->pc = 0x1d1beb4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d1beb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d1beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d1bebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1bec0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d1bec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1bec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1becc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d1beccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d1bed0: 0x11e0004e  beqz        $t7, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D1BED0u;
    {
        const bool branch_taken_0x1d1bed0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BED0u;
        // 0x1d1bed4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bed0) {
            ctx->pc = 0x1D1C00Cu;
            return;
        }
    }
    ctx->pc = 0x1D1BED8u;
    // 0x1d1bed8: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1bed8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bedc: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d1bedcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1bee0: 0x25cece54  addiu       $t6, $t6, -0x31AC
    ctx->pc = 0x1d1bee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954580));
    // 0x1d1bee4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1bee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1bee8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d1bee8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1beec: 0x1a00008  jr          $t5
    ctx->pc = 0x1D1BEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1BEF4u: goto label_1d1bef4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BEECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BEF4u;
label_1d1bef4:
    // 0x1d1bef4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bef8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1bef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1befc: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x1d1befcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bf00: 0xc74683a  jal         func_1D1A0E8
    ctx->pc = 0x1D1BF00u;
    SET_GPR_U32(ctx, 31, 0x1D1BF08u);
    ctx->pc = 0x1D1BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF00u;
    // 0x1d1bf04: 0x24c62850  addiu       $a2, $a2, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A0E8u, 0x1D1BF00u, 0x1D1BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF08u;
label_1d1bf08:
    // 0x1d1bf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1bf0c:
    // 0x1d1bf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1bf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1bf10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1bf10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1bf14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1bf14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1bf18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1bf18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1bf1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d1bf1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1bf20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d1bf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d1bf24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF24u;
        // 0x1d1bf28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BF2Cu;
}
