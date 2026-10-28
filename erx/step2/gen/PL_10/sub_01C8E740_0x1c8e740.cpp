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

// Function: sub_01C8E740
// Address: 0x1c8e740 - 0x1c8e7c0
void sub_01C8E740_0x1c8e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8E740_0x1c8e740");
#endif

    switch (ctx->pc) {
        case 0x1c8e764u: goto label_1c8e764;
        default: break;
    }

    ctx->pc = 0x1c8e740u;

    // 0x1c8e740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8e744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8e748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8e74c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8e750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8e750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e754: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c8e754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e758: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8e758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8e75c: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8E75Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E764u);
    ctx->pc = 0x1C8E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E75Cu;
    // 0x1c8e760: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8E75Cu, 0x1C8E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E764u;
label_1c8e764:
    // 0x1c8e764: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c8e764u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8e768: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c8e768u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c8e76c: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c8e76cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8e770: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c8e770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c8e774: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1c8e774u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8e778: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1c8e778u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c8e77c: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1c8e77cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1c8e780: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1c8e780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1c8e784: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c8e784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c8e788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8e78c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c8e78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c8e790: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c8e790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c8e794: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c8e794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c8e798: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1c8e798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1c8e79c: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1c8e79cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1c8e7a0: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c8e7a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8e7a4: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c8e7a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c8e7a8: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1c8e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1c8e7ac: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1c8e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1c8e7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e7b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8e7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E7B8u;
        // 0x1c8e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E7C0u;
}
