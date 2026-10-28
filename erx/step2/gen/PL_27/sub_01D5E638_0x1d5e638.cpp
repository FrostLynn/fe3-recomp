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

// Function: sub_01D5E638
// Address: 0x1d5e638 - 0x1d5e6d0
void sub_01D5E638_0x1d5e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E638_0x1d5e638");
#endif

    switch (ctx->pc) {
        case 0x1d5e65cu: goto label_1d5e65c;
        default: break;
    }

    ctx->pc = 0x1d5e638u;

    // 0x1d5e638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e63c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5e640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5e648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e64c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d5e64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e650: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5e650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5e654: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5E654u;
    SET_GPR_U32(ctx, 31, 0x1D5E65Cu);
    ctx->pc = 0x1D5E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E654u;
    // 0x1d5e658: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5E654u, 0x1D5E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E65Cu;
label_1d5e65c:
    // 0x1d5e65c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1d5e65cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5e660: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d5e660u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d5e664: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1d5e664u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5e668: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d5e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d5e66c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1d5e66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d5e670: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1d5e670u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5e674: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x1d5e674u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d5e678: 0xae2e05b0  sw          $t6, 0x5B0($s1)
    ctx->pc = 0x1d5e678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 14));
    // 0x1d5e67c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e680: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5e680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5e684: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1d5e684u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d5e688: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1d5e688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1d5e68c: 0x8d4e0084  lw          $t6, 0x84($t2)
    ctx->pc = 0x1d5e68cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1d5e690: 0xae2d05b4  sw          $t5, 0x5B4($s1)
    ctx->pc = 0x1d5e690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 13));
    // 0x1d5e694: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1d5e694u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1d5e698: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1d5e698u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5e69c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1d5e69cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1d5e6a0: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1d5e6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1d5e6a4: 0xae2d05b8  sw          $t5, 0x5B8($s1)
    ctx->pc = 0x1d5e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 13));
    // 0x1d5e6a8: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1d5e6a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1d5e6ac: 0xae2e05a0  sw          $t6, 0x5A0($s1)
    ctx->pc = 0x1d5e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 14));
    // 0x1d5e6b0: 0xae2f05a4  sw          $t7, 0x5A4($s1)
    ctx->pc = 0x1d5e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 15));
    // 0x1d5e6b4: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1d5e6b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d5e6b8: 0xae2f05bc  sw          $t7, 0x5BC($s1)
    ctx->pc = 0x1d5e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 15));
    // 0x1d5e6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5e6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E6C4u;
        // 0x1d5e6c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E6CCu;
    // 0x1d5e6cc: 0x0  nop
    ctx->pc = 0x1d5e6ccu;
    // NOP
    ctx->pc = 0x1d5e6d0u;
}
