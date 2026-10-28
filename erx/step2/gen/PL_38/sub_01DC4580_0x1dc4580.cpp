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

// Function: sub_01DC4580
// Address: 0x1dc4580 - 0x1dc45f8
void sub_01DC4580_0x1dc4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4580_0x1dc4580");
#endif

    switch (ctx->pc) {
        case 0x1dc45acu: goto label_1dc45ac;
        default: break;
    }

    ctx->pc = 0x1dc4580u;

    // 0x1dc4580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4584: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc4584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc458c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4590: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x1dc4590u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1dc4594: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC4594u;
    {
        const bool branch_taken_0x1dc4594 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4594u;
        // 0x1dc4598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4594) {
            ctx->pc = 0x1DC45A4u;
            goto label_1dc45a4;
        }
    }
    ctx->pc = 0x1DC459Cu;
    // 0x1dc459c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dc459cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc45a0: 0xaf8f805c  sw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934620), GPR_U32(ctx, 15));
label_1dc45a4:
    // 0x1dc45a4: 0xc7710a2  jal         func_1DC4288
    ctx->pc = 0x1DC45A4u;
    SET_GPR_U32(ctx, 31, 0x1DC45ACu);
    ctx->pc = 0x1DC4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4288u, 0x1DC45A4u, 0x1DC45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC45ACu;
label_1dc45ac:
    // 0x1dc45ac: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc45acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc45b0: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc45b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc45b4: 0x25efa240  addiu       $t7, $t7, -0x5DC0
    ctx->pc = 0x1dc45b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943296));
    // 0x1dc45b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc45b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc45bc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc45bcu;
    { uint32_t bits = FAST_READ32(0x1DCA240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc45c0: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc45c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc45c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc45c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc45c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc45cc: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc45ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc45d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc45d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc45d4: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc45d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc45d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc45d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc45dc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc45dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc45e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc45e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc45e4: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x1dc45e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1dc45e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc45e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc45ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc45ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc45f0: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC45F0u;
    ctx->pc = 0x1DC45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC45F0u;
    // 0x1dc45f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC45F8u;
}
