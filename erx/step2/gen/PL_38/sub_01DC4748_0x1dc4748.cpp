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

// Function: sub_01DC4748
// Address: 0x1dc4748 - 0x1dc47c0
void sub_01DC4748_0x1dc4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4748_0x1dc4748");
#endif

    switch (ctx->pc) {
        case 0x1dc475cu: goto label_1dc475c;
        case 0x1dc479cu: goto label_1dc479c;
        default: break;
    }

    ctx->pc = 0x1dc4748u;

    // 0x1dc4748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc474c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4750: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4754: 0xc7710ba  jal         func_1DC42E8
    ctx->pc = 0x1DC4754u;
    SET_GPR_U32(ctx, 31, 0x1DC475Cu);
    ctx->pc = 0x1DC4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4754u;
    // 0x1dc4758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC42E8u, 0x1DC4754u, 0x1DC475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC475Cu;
label_1dc475c:
    // 0x1dc475c: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc475cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4760: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4760u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4764: 0x25efa24c  addiu       $t7, $t7, -0x5DB4
    ctx->pc = 0x1dc4764u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943308));
    // 0x1dc4768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc476c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc476cu;
    { uint32_t bits = FAST_READ32(0x1DCA24Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4770: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4770u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc4774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4778: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc477c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc477cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4784: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc4788: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc478c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc478cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4790: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4790u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4794: 0xc771156  jal         func_1DC4558
    ctx->pc = 0x1DC4794u;
    SET_GPR_U32(ctx, 31, 0x1DC479Cu);
    ctx->pc = 0x1DC4798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4794u;
    // 0x1dc4798: 0x8dc60054  lw          $a2, 0x54($t6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4558u, 0x1DC4794u, 0x1DC479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC479Cu;
label_1dc479c:
    // 0x1dc479c: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc479cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc47a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc47a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc47a4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x1dc47a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x1dc47a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc47a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc47ac: 0x29ee0000  slti        $t6, $t7, 0x0
    ctx->pc = 0x1dc47acu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dc47b0: 0xe780b  movn        $t7, $zero, $t6
    ctx->pc = 0x1dc47b0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x1dc47b4: 0xaf8f805c  sw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934620), GPR_U32(ctx, 15));
    // 0x1dc47b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC47B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC47B8u;
        // 0x1dc47bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC47B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC47C0u;
}
