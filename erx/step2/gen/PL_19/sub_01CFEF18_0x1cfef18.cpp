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

// Function: sub_01CFEF18
// Address: 0x1cfef18 - 0x1cfefa0
void sub_01CFEF18_0x1cfef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEF18_0x1cfef18");
#endif

    switch (ctx->pc) {
        case 0x1cfef34u: goto label_1cfef34;
        case 0x1cfef80u: goto label_1cfef80;
        default: break;
    }

    ctx->pc = 0x1cfef18u;

    // 0x1cfef18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfef1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfef20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfef24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfef24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef28: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cfef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cfef2c: 0xc73f49c  jal         func_1CFD270
    ctx->pc = 0x1CFEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFEF34u);
    ctx->pc = 0x1CFEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEF2Cu;
    // 0x1cfef30: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD270u, 0x1CFEF2Cu, 0x1CFEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEF34u;
label_1cfef34:
    // 0x1cfef34: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cfef34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cfef38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef40: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1cfef40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1cfef44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfef48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfef48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef4c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfef4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfef50: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1cfef50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cfef54: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFEF54u;
    {
        const bool branch_taken_0x1cfef54 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CFEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEF54u;
        // 0x1cfef58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfef54) {
            ctx->pc = 0x1CFEF78u;
            goto label_1cfef78;
        }
    }
    ctx->pc = 0x1CFEF5Cu;
    // 0x1cfef5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfef68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfef68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfef6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfef6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfef70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfef74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cfef74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfef78:
    // 0x1cfef78: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFEF78u;
    SET_GPR_U32(ctx, 31, 0x1CFEF80u);
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFEF78u, 0x1CFEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEF80u;
label_1cfef80:
    // 0x1cfef80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfef84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfef88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfef8c: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x1cfef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1cfef90: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1cfef90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1cfef94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfef94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfef98: 0x873f776  j           func_1CFDDD8
    ctx->pc = 0x1CFEF98u;
    ctx->pc = 0x1CFEF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEF98u;
    // 0x1cfef9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDDD8u;
    sub_01CFDDD8_0x1cfddd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEFA0u;
}
