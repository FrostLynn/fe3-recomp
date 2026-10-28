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

// Function: sub_01D00280
// Address: 0x1d00280 - 0x1d00300
void sub_01D00280_0x1d00280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00280_0x1d00280");
#endif

    switch (ctx->pc) {
        case 0x1d002d8u: goto label_1d002d8;
        case 0x1d002e0u: goto label_1d002e0;
        case 0x1d002e4u: goto label_1d002e4;
        default: break;
    }

    ctx->pc = 0x1d00280u;

    // 0x1d00280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d00280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d00284: 0x2484fef0  addiu       $a0, $a0, -0x110
    ctx->pc = 0x1d00284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967024));
    // 0x1d00288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d00288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0028c: 0x2c8f0005  sltiu       $t7, $a0, 0x5
    ctx->pc = 0x1d0028cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d00290: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d00290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d00294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d00294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d00298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d00298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0029c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d002a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d002a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d002a4: 0x11e00045  beqz        $t7, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D002A4u;
    {
        const bool branch_taken_0x1d002a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D002A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D002A4u;
        // 0x1d002a8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d002a4) {
            ctx->pc = 0x1D003BCu;
            return;
        }
    }
    ctx->pc = 0x1D002ACu;
    // 0x1d002ac: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1d002acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1d002b0: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d002b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d002b4: 0x25ce13dc  addiu       $t6, $t6, 0x13DC
    ctx->pc = 0x1d002b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 5084));
    // 0x1d002b8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d002b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d002bc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d002bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d002c0: 0x1a00008  jr          $t5
    ctx->pc = 0x1D002C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D002C8u: goto label_1d002c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D002C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D002C8u;
label_1d002c8:
    // 0x1d002c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d002c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d002cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d002ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d002d0: 0x3c0601d0  lui         $a2, 0x1D0
    ctx->pc = 0x1d002d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)464 << 16));
    // 0x1d002d4: 0x24c67f10  addiu       $a2, $a2, 0x7F10
    ctx->pc = 0x1d002d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32528));
label_1d002d8:
    // 0x1d002d8: 0xc73f8b8  jal         func_1CFE2E0
    ctx->pc = 0x1D002D8u;
    SET_GPR_U32(ctx, 31, 0x1D002E0u);
    ctx->pc = 0x1CFE2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE2E0u, 0x1D002D8u, 0x1D002E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D002E0u;
label_1d002e0:
    // 0x1d002e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d002e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d002e4:
    // 0x1d002e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d002e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d002e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d002e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d002ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d002ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d002f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d002f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d002f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d002f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d002f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D002F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D002F8u;
        // 0x1d002fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D002F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D00300u;
}
