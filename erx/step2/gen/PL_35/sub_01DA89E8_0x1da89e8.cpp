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

// Function: sub_01DA89E8
// Address: 0x1da89e8 - 0x1da8a70
void sub_01DA89E8_0x1da89e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA89E8_0x1da89e8");
#endif

    switch (ctx->pc) {
        case 0x1da8a04u: goto label_1da8a04;
        case 0x1da8a3cu: goto label_1da8a3c;
        case 0x1da8a50u: goto label_1da8a50;
        default: break;
    }

    ctx->pc = 0x1da89e8u;

    // 0x1da89e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da89e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da89ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da89ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da89f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da89f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da89f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da89f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da89f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1da89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1da89fc: 0xc769b9a  jal         func_1DA6E68
    ctx->pc = 0x1DA89FCu;
    SET_GPR_U32(ctx, 31, 0x1DA8A04u);
    ctx->pc = 0x1DA8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA89FCu;
    // 0x1da8a00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E68u, 0x1DA89FCu, 0x1DA8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8A04u;
label_1da8a04:
    // 0x1da8a04: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1da8a04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da8a08: 0x25effff5  addiu       $t7, $t7, -0xB
    ctx->pc = 0x1da8a08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1da8a0c: 0x2dee0013  sltiu       $t6, $t7, 0x13
    ctx->pc = 0x1da8a0cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1da8a10: 0x11c0001f  beqz        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DA8A10u;
    {
        const bool branch_taken_0x1da8a10 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8A10u;
        // 0x1da8a14: 0x3c0e01db  lui         $t6, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8a10) {
            ctx->pc = 0x1DA8A90u;
            return;
        }
    }
    ctx->pc = 0x1DA8A18u;
    // 0x1da8a18: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8a18u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da8a1c: 0x25ce9e50  addiu       $t6, $t6, -0x61B0
    ctx->pc = 0x1da8a1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942288));
    // 0x1da8a20: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da8a20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da8a24: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1da8a24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8a28: 0x1a00008  jr          $t5
    ctx->pc = 0x1DA8A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA8A30u: goto label_1da8a30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8A28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA8A30u;
label_1da8a30:
    // 0x1da8a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8a38: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1da8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1da8a3c:
    // 0x1da8a3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8a44: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da8a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da8a48: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8A48u;
    SET_GPR_U32(ctx, 31, 0x1DA8A50u);
    ctx->pc = 0x1DA8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8A48u;
    // 0x1da8a4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8A48u, 0x1DA8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8A50u;
label_1da8a50:
    // 0x1da8a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8a5c: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x1da8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1da8a60: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1da8a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1da8a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8a68: 0x8769e66  j           func_1DA7998
    ctx->pc = 0x1DA8A68u;
    ctx->pc = 0x1DA8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8A68u;
    // 0x1da8a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7998u;
    sub_01DA7998_0x1da7998(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8A70u;
}
