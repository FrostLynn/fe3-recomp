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

// Function: sub_01D8ACC0
// Address: 0x1d8acc0 - 0x1d8ad68
void sub_01D8ACC0_0x1d8acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8ACC0_0x1d8acc0");
#endif

    switch (ctx->pc) {
        case 0x1d8ace0u: goto label_1d8ace0;
        case 0x1d8ad04u: goto label_1d8ad04;
        case 0x1d8ad14u: goto label_1d8ad14;
        default: break;
    }

    ctx->pc = 0x1d8acc0u;

    // 0x1d8acc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8acc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8acc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8accc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8acd0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8acd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8acd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acd8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8ACD8u;
    SET_GPR_U32(ctx, 31, 0x1D8ACE0u);
    ctx->pc = 0x1D8ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ACD8u;
    // 0x1d8acdc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8ACD8u, 0x1D8ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ACE0u;
label_1d8ace0:
    // 0x1d8ace0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8ace0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ace4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ace8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8acec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8acecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8acf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acf4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8acf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8acf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8acf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acfc: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8ACFCu;
    SET_GPR_U32(ctx, 31, 0x1D8AD04u);
    ctx->pc = 0x1D8AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ACFCu;
    // 0x1d8ad00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8ACFCu, 0x1D8AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AD04u;
label_1d8ad04:
    // 0x1d8ad04: 0x26100580  addiu       $s0, $s0, 0x580
    ctx->pc = 0x1d8ad04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x1d8ad08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad0c: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8AD0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8AD14u);
    ctx->pc = 0x1D8AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AD0Cu;
    // 0x1d8ad10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8AD0Cu, 0x1D8AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AD14u;
label_1d8ad14:
    // 0x1d8ad14: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8ad14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8ad18: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1d8ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1d8ad1c: 0x25ef2700  addiu       $t7, $t7, 0x2700
    ctx->pc = 0x1d8ad1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9984));
    // 0x1d8ad20: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d8ad20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d8ad24: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d8ad24u;
    { uint32_t bits = FAST_READ32(0x1D92700u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8ad28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ad2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ad30: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8ad30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8ad34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8ad34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ad38: 0x25ef2704  addiu       $t7, $t7, 0x2704
    ctx->pc = 0x1d8ad38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9988));
    // 0x1d8ad3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ad40: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1d8ad40u;
    { uint32_t bits = FAST_READ32(0x1D92704u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8ad44: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8ad44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8ad48: 0x25ef2708  addiu       $t7, $t7, 0x2708
    ctx->pc = 0x1d8ad48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9992));
    // 0x1d8ad4c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d8ad4cu;
    { uint32_t bits = FAST_READ32(0x1D92708u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d8ad50: 0x87624ea  j           func_1D893A8
    ctx->pc = 0x1D8AD50u;
    ctx->pc = 0x1D8AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AD50u;
    // 0x1d8ad54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D893A8u;
    sub_01D893A8_0x1d893a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8AD58u;
    // 0x1d8ad58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AD60u;
    // 0x1d8ad60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AD60u;
        // 0x1d8ad64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AD68u;
}
