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

// Function: sub_01DCBFA0
// Address: 0x1dcbfa0 - 0x1dcc090
void sub_01DCBFA0_0x1dcbfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBFA0_0x1dcbfa0");
#endif

    switch (ctx->pc) {
        case 0x1dcbfc0u: goto label_1dcbfc0;
        case 0x1dcbfdcu: goto label_1dcbfdc;
        case 0x1dcc020u: goto label_1dcc020;
        case 0x1dcc028u: goto label_1dcc028;
        case 0x1dcc038u: goto label_1dcc038;
        default: break;
    }

    ctx->pc = 0x1dcbfa0u;

    // 0x1dcbfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcbfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcbfa4: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbfa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbfa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcbfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcbfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcbfb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcbfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dcbfb4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcbfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcbfb8: 0xc772ed0  jal         func_1DCBB40
    ctx->pc = 0x1DCBFB8u;
    SET_GPR_U32(ctx, 31, 0x1DCBFC0u);
    ctx->pc = 0x1DCBFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBFB8u;
    // 0x1dcbfbc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB40u, 0x1DCBFB8u, 0x1DCBFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBFC0u;
label_1dcbfc0:
    // 0x1dcbfc0: 0x8f8e8030  lw          $t6, -0x7FD0($gp)
    ctx->pc = 0x1dcbfc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbfc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcbfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbfc8: 0x8dcf05a4  lw          $t7, 0x5A4($t6)
    ctx->pc = 0x1dcbfc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1444)));
    // 0x1dcbfcc: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBFCCu;
    {
        const bool branch_taken_0x1dcbfcc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBFCCu;
        // 0x1dcbfd0: 0x8c5003a4  lw          $s0, 0x3A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbfcc) {
            ctx->pc = 0x1DCBFE0u;
            goto label_1dcbfe0;
        }
    }
    ctx->pc = 0x1DCBFD4u;
    // 0x1dcbfd4: 0xc772f46  jal         func_1DCBD18
    ctx->pc = 0x1DCBFD4u;
    SET_GPR_U32(ctx, 31, 0x1DCBFDCu);
    ctx->pc = 0x1DCBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBD18u, 0x1DCBFD4u, 0x1DCBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBFDCu;
label_1dcbfdc:
    // 0x1dcbfdc: 0x8f8e8030  lw          $t6, -0x7FD0($gp)
    ctx->pc = 0x1dcbfdcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
label_1dcbfe0:
    // 0x1dcbfe0: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1dcbfe0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dcbfe4: 0xc5e108d8  lwc1        $f1, 0x8D8($t7)
    ctx->pc = 0x1dcbfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcbfe8: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dcbfe8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbfec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dcbfecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dcbff0: 0x25efd778  addiu       $t7, $t7, -0x2888
    ctx->pc = 0x1dcbff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956920));
    // 0x1dcbff4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dcbff4u;
    { uint32_t bits = FAST_READ32(0x1DCD778u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcbff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcbff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcbffc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCBFFCu;
    {
        const bool branch_taken_0x1dcbffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBFFCu;
        // 0x1dcc000: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbffc) {
            ctx->pc = 0x1DCC008u;
            goto label_1dcc008;
        }
    }
    ctx->pc = 0x1DCC004u;
    // 0x1dcc004: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1dcc004u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dcc008:
    // 0x1dcc008: 0x260ffeb1  addiu       $t7, $s0, -0x14F
    ctx->pc = 0x1dcc008u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966961));
    // 0x1dcc00c: 0x2def0006  sltiu       $t7, $t7, 0x6
    ctx->pc = 0x1dcc00cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dcc010: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DCC010u;
    {
        const bool branch_taken_0x1dcc010 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC010u;
        // 0x1dcc014: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc010) {
            ctx->pc = 0x1DCC084u;
            goto label_1dcc084;
        }
    }
    ctx->pc = 0x1DCC018u;
    // 0x1dcc018: 0x8dce00dc  lw          $t6, 0xDC($t6)
    ctx->pc = 0x1dcc018u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dcc01c: 0xadcf0cd8  sw          $t7, 0xCD8($t6)
    ctx->pc = 0x1dcc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 15));
label_1dcc020:
    // 0x1dcc020: 0xc772fa2  jal         func_1DCBE88
    ctx->pc = 0x1DCC020u;
    SET_GPR_U32(ctx, 31, 0x1DCC028u);
    ctx->pc = 0x1DCC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC020u;
    // 0x1dcc024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE88u, 0x1DCC020u, 0x1DCC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC028u;
label_1dcc028:
    // 0x1dcc028: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc02c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcc02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcc030: 0xc772ec6  jal         func_1DCBB18
    ctx->pc = 0x1DCC030u;
    SET_GPR_U32(ctx, 31, 0x1DCC038u);
    ctx->pc = 0x1DCC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC030u;
    // 0x1dcc034: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB18u, 0x1DCC030u, 0x1DCC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC038u;
label_1dcc038:
    // 0x1dcc038: 0x8c4f0248  lw          $t7, 0x248($v0)
    ctx->pc = 0x1dcc038u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x1dcc03c: 0x8ded4864  lw          $t5, 0x4864($t7)
    ctx->pc = 0x1dcc03cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dcc040: 0x8dae0480  lw          $t6, 0x480($t5)
    ctx->pc = 0x1dcc040u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1152)));
    // 0x1dcc044: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dcc044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcc048: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCC048u;
    {
        const bool branch_taken_0x1dcc048 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC048u;
        // 0x1dcc04c: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc048) {
            ctx->pc = 0x1DCC05Cu;
            goto label_1dcc05c;
        }
    }
    ctx->pc = 0x1DCC050u;
    // 0x1dcc050: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCC050u;
    {
        const bool branch_taken_0x1dcc050 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC050u;
        // 0x1dcc054: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc050) {
            ctx->pc = 0x1DCC05Cu;
            goto label_1dcc05c;
        }
    }
    ctx->pc = 0x1DCC058u;
    // 0x1dcc058: 0xadaf0480  sw          $t7, 0x480($t5)
    ctx->pc = 0x1dcc058u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1152), GPR_U32(ctx, 15));
label_1dcc05c:
    // 0x1dcc05c: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcc05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc060: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dcc060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcc064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcc064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc068: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dcc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcc06c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcc06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcc070: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcc070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcc074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcc074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcc078: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dcc078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dcc07c: 0x8772ee0  j           func_1DCBB80
    ctx->pc = 0x1DCC07Cu;
    ctx->pc = 0x1DCC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC07Cu;
    // 0x1dcc080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB80u;
    sub_01DCBB80_0x1dcbb80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCC084u;
label_1dcc084:
    // 0x1dcc084: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1dcc084u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dcc088: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1DCC088u;
    {
        const bool branch_taken_0x1dcc088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC088u;
        // 0x1dcc08c: 0xade00cd8  sw          $zero, 0xCD8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc088) {
            ctx->pc = 0x1DCC020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcc020;
        }
    }
    ctx->pc = 0x1DCC090u;
}
