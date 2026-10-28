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

// Function: sub_01C20978
// Address: 0x1c20978 - 0x1c209f8
void sub_01C20978_0x1c20978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20978_0x1c20978");
#endif

    switch (ctx->pc) {
        case 0x1c2099cu: goto label_1c2099c;
        default: break;
    }

    ctx->pc = 0x1c20978u;

    // 0x1c20978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2097c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c20988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2098c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c2098cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20990: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c20994: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20994u;
    SET_GPR_U32(ctx, 31, 0x1C2099Cu);
    ctx->pc = 0x1C20998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20994u;
    // 0x1c20998: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20994u, 0x1C2099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2099Cu;
label_1c2099c:
    // 0x1c2099c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c2099cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c209a0: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c209a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c209a4: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c209a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c209a8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c209a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c209ac: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1c209acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c209b0: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1c209b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c209b4: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1c209b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1c209b8: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1c209b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1c209bc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c209bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c209c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c209c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c209c4: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c209c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c209c8: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c209c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c209cc: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c209ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c209d0: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1c209d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1c209d4: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1c209d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1c209d8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c209d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c209dc: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c209dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c209e0: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1c209e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1c209e4: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1c209e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1c209e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c209e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c209ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c209ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c209f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C209F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C209F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C209F0u;
        // 0x1c209f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C209F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C209F8u;
}
