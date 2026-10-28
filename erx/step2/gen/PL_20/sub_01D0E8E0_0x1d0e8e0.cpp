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

// Function: sub_01D0E8E0
// Address: 0x1d0e8e0 - 0x1d0e9c0
void sub_01D0E8E0_0x1d0e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E8E0_0x1d0e8e0");
#endif

    switch (ctx->pc) {
        case 0x1d0e900u: goto label_1d0e900;
        case 0x1d0e928u: goto label_1d0e928;
        case 0x1d0e978u: goto label_1d0e978;
        case 0x1d0e9a0u: goto label_1d0e9a0;
        default: break;
    }

    ctx->pc = 0x1d0e8e0u;

    // 0x1d0e8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e8e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0e8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0e8ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e8f4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0e8f8: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E8F8u;
    SET_GPR_U32(ctx, 31, 0x1D0E900u);
    ctx->pc = 0x1D0E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8F8u;
    // 0x1d0e8fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E8F8u, 0x1D0E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E900u;
label_1d0e900:
    // 0x1d0e900: 0xaf80807c  sw          $zero, -0x7F84($gp)
    ctx->pc = 0x1d0e900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934652), GPR_U32(ctx, 0));
    // 0x1d0e904: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0e904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0e908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e90c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d0e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e910: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e91c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d0e91cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e920: 0xc7431f2  jal         func_1D0C7C8
    ctx->pc = 0x1D0E920u;
    SET_GPR_U32(ctx, 31, 0x1D0E928u);
    ctx->pc = 0x1D0E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E920u;
    // 0x1d0e924: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C7C8u, 0x1D0E920u, 0x1D0E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E928u;
label_1d0e928:
    // 0x1d0e928: 0x8f8f8080  lw          $t7, -0x7F80($gp)
    ctx->pc = 0x1d0e928u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934656)));
    // 0x1d0e92c: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1d0e92cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0e930: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d0e930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d0e934: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d0e934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d0e938: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d0e938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d0e93c: 0x1ee001a  div         $zero, $t7, $t6
    ctx->pc = 0x1d0e93cu;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d0e940: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0E940u;
    {
        const bool branch_taken_0x1d0e940 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e940) {
            ctx->pc = 0x1D0E944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E940u;
            // 0x1d0e944: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E948u;
            goto label_1d0e948;
        }
    }
    ctx->pc = 0x1D0E948u;
label_1d0e948:
    // 0x1d0e948: 0x8e2d081c  lw          $t5, 0x81C($s1)
    ctx->pc = 0x1d0e948u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1d0e94c: 0x29ab00aa  slti        $t3, $t5, 0xAA
    ctx->pc = 0x1d0e94cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x1d0e950: 0x29ad0055  slti        $t5, $t5, 0x55
    ctx->pc = 0x1d0e950u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x1d0e954: 0x6010  mfhi        $t4
    ctx->pc = 0x1d0e954u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x1d0e958: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d0e958u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e95c: 0xc7080  sll         $t6, $t4, 2
    ctx->pc = 0x1d0e95cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1d0e960: 0xaf8c8080  sw          $t4, -0x7F80($gp)
    ctx->pc = 0x1d0e960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934656), GPR_U32(ctx, 12));
    // 0x1d0e964: 0x25ef33b8  addiu       $t7, $t7, 0x33B8
    ctx->pc = 0x1d0e964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13240));
    // 0x1d0e968: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E968u;
    {
        const bool branch_taken_0x1d0e968 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E968u;
        // 0x1d0e96c: 0x1cf7021  addu        $t6, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e968) {
            ctx->pc = 0x1D0E98Cu;
            goto label_1d0e98c;
        }
    }
    ctx->pc = 0x1D0E970u;
    // 0x1d0e970: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1d0e970u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d0e974: 0xaf8f807c  sw          $t7, -0x7F84($gp)
    ctx->pc = 0x1d0e974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934652), GPR_U32(ctx, 15));
label_1d0e978:
    // 0x1d0e978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e97c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0e97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e984: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E984u;
        // 0x1d0e988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E98Cu;
label_1d0e98c:
    // 0x1d0e98c: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E98Cu;
    {
        const bool branch_taken_0x1d0e98c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E98Cu;
        // 0x1d0e990: 0x3c0e01d1  lui         $t6, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e98c) {
            ctx->pc = 0x1D0E9B0u;
            goto label_1d0e9b0;
        }
    }
    ctx->pc = 0x1D0E994u;
    // 0x1d0e994: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0e994u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e998: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x1d0e998u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1d0e99c: 0x25ce33c8  addiu       $t6, $t6, 0x33C8
    ctx->pc = 0x1d0e99cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13256));
label_1d0e9a0:
    // 0x1d0e9a0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0e9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0e9a4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d0e9a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0e9a8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D0E9A8u;
    {
        const bool branch_taken_0x1d0e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E9A8u;
        // 0x1d0e9ac: 0xaf8d807c  sw          $t5, -0x7F84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934652), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e9a8) {
            ctx->pc = 0x1D0E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e978;
        }
    }
    ctx->pc = 0x1D0E9B0u;
label_1d0e9b0:
    // 0x1d0e9b0: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x1d0e9b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1d0e9b4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0E9B4u;
    {
        const bool branch_taken_0x1d0e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E9B4u;
        // 0x1d0e9b8: 0x25ce33d8  addiu       $t6, $t6, 0x33D8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e9b4) {
            ctx->pc = 0x1D0E9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e9a0;
        }
    }
    ctx->pc = 0x1D0E9BCu;
    // 0x1d0e9bc: 0x0  nop
    ctx->pc = 0x1d0e9bcu;
    // NOP
    ctx->pc = 0x1d0e9c0u;
}
