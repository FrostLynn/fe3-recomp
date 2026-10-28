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

// Function: sub_01DC46B8
// Address: 0x1dc46b8 - 0x1dc4718
void sub_01DC46B8_0x1dc46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC46B8_0x1dc46b8");
#endif

    switch (ctx->pc) {
        case 0x1dc46ccu: goto label_1dc46cc;
        default: break;
    }

    ctx->pc = 0x1dc46b8u;

    // 0x1dc46b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc46bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc46bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc46c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc46c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc46c4: 0xc7710ae  jal         func_1DC42B8
    ctx->pc = 0x1DC46C4u;
    SET_GPR_U32(ctx, 31, 0x1DC46CCu);
    ctx->pc = 0x1DC46C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC46C4u;
    // 0x1dc46c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC42B8u, 0x1DC46C4u, 0x1DC46CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC46CCu;
label_1dc46cc:
    // 0x1dc46cc: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc46ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc46d0: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc46d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc46d4: 0x25efa248  addiu       $t7, $t7, -0x5DB8
    ctx->pc = 0x1dc46d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943304));
    // 0x1dc46d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc46d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc46dc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc46dcu;
    { uint32_t bits = FAST_READ32(0x1DCA248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc46e0: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc46e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc46e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc46e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc46e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc46ec: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc46ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc46f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc46f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc46f4: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc46f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc46f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc46f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc46fc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc46fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4704: 0x8dc60018  lw          $a2, 0x18($t6)
    ctx->pc = 0x1dc4704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x1dc4708: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc470c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc470cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4710: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4710u;
    ctx->pc = 0x1DC4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4710u;
    // 0x1dc4714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4718u;
}
