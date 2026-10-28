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

// Function: sub_01DA88D8
// Address: 0x1da88d8 - 0x1da8964
void sub_01DA88D8_0x1da88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA88D8_0x1da88d8");
#endif

    switch (ctx->pc) {
        case 0x1da88f4u: goto label_1da88f4;
        case 0x1da8930u: goto label_1da8930;
        case 0x1da8944u: goto label_1da8944;
        default: break;
    }

    ctx->pc = 0x1da88d8u;

    // 0x1da88d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da88d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da88dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da88dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da88e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da88e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da88e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da88e8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1da88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1da88ec: 0xc769b9a  jal         func_1DA6E68
    ctx->pc = 0x1DA88ECu;
    SET_GPR_U32(ctx, 31, 0x1DA88F4u);
    ctx->pc = 0x1DA88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA88ECu;
    // 0x1da88f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E68u, 0x1DA88ECu, 0x1DA88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA88F4u;
label_1da88f4:
    // 0x1da88f4: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1da88f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1da88f8: 0x25effff8  addiu       $t7, $t7, -0x8
    ctx->pc = 0x1da88f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
    // 0x1da88fc: 0x2dee0018  sltiu       $t6, $t7, 0x18
    ctx->pc = 0x1da88fcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1da8900: 0x11c00020  beqz        $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA8900u;
    {
        const bool branch_taken_0x1da8900 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8900u;
        // 0x1da8904: 0x3c0e01db  lui         $t6, 0x1DB (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8900) {
            ctx->pc = 0x1DA8984u;
            return;
        }
    }
    ctx->pc = 0x1DA8908u;
    // 0x1da8908: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8908u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da890c: 0x25ce9df0  addiu       $t6, $t6, -0x6210
    ctx->pc = 0x1da890cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942192));
    // 0x1da8910: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da8910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da8914: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1da8914u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8918: 0x1a00008  jr          $t5
    ctx->pc = 0x1DA8918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA8920u: goto label_1da8920;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA8920u;
label_1da8920:
    // 0x1da8920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8928: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x1da8928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1da892c: 0x0  nop
    ctx->pc = 0x1da892cu;
    // NOP
label_1da8930:
    // 0x1da8930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8938: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da8938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da893c: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA893Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8944u);
    ctx->pc = 0x1DA8940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA893Cu;
    // 0x1da8940: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA893Cu, 0x1DA8944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8944u;
label_1da8944:
    // 0x1da8944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da894c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da894cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8950: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x1da8950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x1da8954: 0x2406010f  addiu       $a2, $zero, 0x10F
    ctx->pc = 0x1da8954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1da8958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da895c: 0x8769e66  j           func_1DA7998
    ctx->pc = 0x1DA895Cu;
    ctx->pc = 0x1DA8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA895Cu;
    // 0x1da8960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7998u;
    sub_01DA7998_0x1da7998(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8964u;
}
