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

// Function: sub_01D53908
// Address: 0x1d53908 - 0x1d539a8
void sub_01D53908_0x1d53908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53908_0x1d53908");
#endif

    switch (ctx->pc) {
        case 0x1d53930u: goto label_1d53930;
        case 0x1d5395cu: goto label_1d5395c;
        default: break;
    }

    ctx->pc = 0x1d53908u;

    // 0x1d53908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5390c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5390cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53914: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d53918: 0x8c8d0018  lw          $t5, 0x18($a0)
    ctx->pc = 0x1d53918u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d5391c: 0x15af0018  bne         $t5, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5391Cu;
    {
        const bool branch_taken_0x1d5391c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D53920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5391Cu;
        // 0x1d53920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5391c) {
            ctx->pc = 0x1D53980u;
            goto label_1d53980;
        }
    }
    ctx->pc = 0x1D53924u;
    // 0x1d53924: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d53924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d53928: 0xc7543e8  jal         func_1D50FA0
    ctx->pc = 0x1D53928u;
    SET_GPR_U32(ctx, 31, 0x1D53930u);
    ctx->pc = 0x1D5392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53928u;
    // 0x1d5392c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FA0u, 0x1D53928u, 0x1D53930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53930u;
label_1d53930:
    // 0x1d53930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d53934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53938: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d53938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5393c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5393cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53944: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d53944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d53948: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d53948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d5394c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D5394Cu;
    {
        const bool branch_taken_0x1d5394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5394Cu;
        // 0x1d53950: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5394c) {
            ctx->pc = 0x1D5397Cu;
            goto label_1d5397c;
        }
    }
    ctx->pc = 0x1D53954u;
    // 0x1d53954: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D53954u;
    SET_GPR_U32(ctx, 31, 0x1D5395Cu);
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D53954u, 0x1D5395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5395Cu;
label_1d5395c:
    // 0x1d5395c: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1d5395cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d53960: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1d53960u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53964: 0xae0e0018  sw          $t6, 0x18($s0)
    ctx->pc = 0x1d53964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 14));
    // 0x1d53968: 0x8d8f0328  lw          $t7, 0x328($t4)
    ctx->pc = 0x1d53968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 808)));
    // 0x1d5396c: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5396Cu;
    {
        const bool branch_taken_0x1d5396c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x1D53970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5396Cu;
        // 0x1d53970: 0x240d0002  addiu       $t5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5396c) {
            ctx->pc = 0x1D53980u;
            goto label_1d53980;
        }
    }
    ctx->pc = 0x1D53974u;
    // 0x1d53974: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d53974u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d53978: 0xad8f0328  sw          $t7, 0x328($t4)
    ctx->pc = 0x1d53978u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 808), GPR_U32(ctx, 15));
label_1d5397c:
    // 0x1d5397c: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1d5397cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d53980:
    // 0x1d53980: 0x55a00004  bnel        $t5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D53980u;
    {
        const bool branch_taken_0x1d53980 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d53980) {
            ctx->pc = 0x1D53984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53980u;
            // 0x1d53984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53994u;
            goto label_1d53994;
        }
    }
    ctx->pc = 0x1D53988u;
    // 0x1d53988: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d53988u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5398c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d5398cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d53990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d53994:
    // 0x1d53994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d53994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d53998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5399c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5399Cu;
        // 0x1d539a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D539A4u;
    // 0x1d539a4: 0x0  nop
    ctx->pc = 0x1d539a4u;
    // NOP
    ctx->pc = 0x1d539a8u;
}
