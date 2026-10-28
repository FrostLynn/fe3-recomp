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

// Function: sub_01D5E4E8
// Address: 0x1d5e4e8 - 0x1d5e568
void sub_01D5E4E8_0x1d5e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E4E8_0x1d5e4e8");
#endif

    switch (ctx->pc) {
        case 0x1d5e50cu: goto label_1d5e50c;
        default: break;
    }

    ctx->pc = 0x1d5e4e8u;

    // 0x1d5e4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5e4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5e4f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5e4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e4fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d5e4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e500: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5e500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5e504: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5E504u;
    SET_GPR_U32(ctx, 31, 0x1D5E50Cu);
    ctx->pc = 0x1D5E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E504u;
    // 0x1d5e508: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5E504u, 0x1D5E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E50Cu;
label_1d5e50c:
    // 0x1d5e50c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d5e50cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5e510: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d5e510u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d5e514: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1d5e514u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5e518: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d5e518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d5e51c: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1d5e51cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5e520: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1d5e520u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5e524: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1d5e524u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1d5e528: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1d5e528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1d5e52c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5e52cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5e530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e534: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1d5e534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d5e538: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d5e538u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d5e53c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1d5e53cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1d5e540: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1d5e540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1d5e544: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1d5e544u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1d5e548: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1d5e548u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5e54c: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1d5e54cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1d5e550: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1d5e550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1d5e554: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1d5e554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1d5e558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e55c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5e55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e560: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E560u;
        // 0x1d5e564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E568u;
}
