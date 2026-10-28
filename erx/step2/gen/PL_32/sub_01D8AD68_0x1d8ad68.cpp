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

// Function: sub_01D8AD68
// Address: 0x1d8ad68 - 0x1d8ae00
void sub_01D8AD68_0x1d8ad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AD68_0x1d8ad68");
#endif

    switch (ctx->pc) {
        case 0x1d8ad88u: goto label_1d8ad88;
        case 0x1d8adacu: goto label_1d8adac;
        case 0x1d8adbcu: goto label_1d8adbc;
        default: break;
    }

    ctx->pc = 0x1d8ad68u;

    // 0x1d8ad68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8ad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8ad6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8ad70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ad74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8ad78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8ad78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad7c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8ad80: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AD80u;
    SET_GPR_U32(ctx, 31, 0x1D8AD88u);
    ctx->pc = 0x1D8AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AD80u;
    // 0x1d8ad84: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AD80u, 0x1D8AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AD88u;
label_1d8ad88:
    // 0x1d8ad88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8ad88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8ad90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8ad94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ad94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8ad98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ad9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8ad9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ada0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8ada0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ada4: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8ADA4u;
    SET_GPR_U32(ctx, 31, 0x1D8ADACu);
    ctx->pc = 0x1D8ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ADA4u;
    // 0x1d8ada8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8ADA4u, 0x1D8ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ADACu;
label_1d8adac:
    // 0x1d8adac: 0x26310580  addiu       $s1, $s1, 0x580
    ctx->pc = 0x1d8adacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d8adb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8adb4: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8ADB4u;
    SET_GPR_U32(ctx, 31, 0x1D8ADBCu);
    ctx->pc = 0x1D8ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ADB4u;
    // 0x1d8adb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8ADB4u, 0x1D8ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ADBCu;
label_1d8adbc:
    // 0x1d8adbc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d8adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d8adc0: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8adc0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8adc4: 0x25ef270c  addiu       $t7, $t7, 0x270C
    ctx->pc = 0x1d8adc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9996));
    // 0x1d8adc8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d8adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d8adcc: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1d8adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8add0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8add4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d8add4u;
    { uint32_t bits = FAST_READ32(0x1D9270Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8add8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d8add8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d8addc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8addcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ade0: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8ade0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8ade4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8ade4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ade8: 0x25ef2710  addiu       $t7, $t7, 0x2710
    ctx->pc = 0x1d8ade8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 10000));
    // 0x1d8adec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8adecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8adf0: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d8adf0u;
    { uint32_t bits = FAST_READ32(0x1D92710u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d8adf4: 0x87624ea  j           func_1D893A8
    ctx->pc = 0x1D8ADF4u;
    ctx->pc = 0x1D8ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ADF4u;
    // 0x1d8adf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D893A8u;
    sub_01D893A8_0x1d893a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8ADFCu;
    // 0x1d8adfc: 0x0  nop
    ctx->pc = 0x1d8adfcu;
    // NOP
    ctx->pc = 0x1d8ae00u;
}
