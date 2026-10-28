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

// Function: sub_01DCDD98
// Address: 0x1dcdd98 - 0x1dcde68
void sub_01DCDD98_0x1dcdd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDD98_0x1dcdd98");
#endif

    switch (ctx->pc) {
        case 0x1dcddc0u: goto label_1dcddc0;
        case 0x1dcddd0u: goto label_1dcddd0;
        case 0x1dcdde4u: goto label_1dcdde4;
        case 0x1dcde04u: goto label_1dcde04;
        case 0x1dcde14u: goto label_1dcde14;
        case 0x1dcde20u: goto label_1dcde20;
        default: break;
    }

    ctx->pc = 0x1dcdd98u;

    // 0x1dcdd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcdd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcdd9c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdda0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dcdda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dcdda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcdda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcdda8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcdda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcddac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcddb0: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcddb4: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1dcddb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcddb8: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCDDB8u;
    SET_GPR_U32(ctx, 31, 0x1DCDDC0u);
    ctx->pc = 0x1DCDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDDB8u;
    // 0x1dcddbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCDDB8u, 0x1DCDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDDC0u;
label_1dcddc0:
    // 0x1dcddc0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcddc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcddc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcddc8: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDDC8u;
    SET_GPR_U32(ctx, 31, 0x1DCDDD0u);
    ctx->pc = 0x1DCDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDDC8u;
    // 0x1dcddcc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDDC8u, 0x1DCDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDDD0u;
label_1dcddd0:
    // 0x1dcddd0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcddd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcddd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcddd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcddd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcddd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdddc: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDDDCu;
    SET_GPR_U32(ctx, 31, 0x1DCDDE4u);
    ctx->pc = 0x1DCDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDDDCu;
    // 0x1dcdde0: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDDDCu, 0x1DCDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDDE4u;
label_1dcdde4:
    // 0x1dcdde4: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1dcdde4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dcdde8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcdde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcddec: 0x240f001e  addiu       $t7, $zero, 0x1E
    ctx->pc = 0x1dcddecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dcddf0: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCDDF0u;
    {
        const bool branch_taken_0x1dcddf0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDF0u;
        // 0x1dcddf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcddf0) {
            ctx->pc = 0x1DCDE18u;
            goto label_1dcde18;
        }
    }
    ctx->pc = 0x1DCDDF8u;
    // 0x1dcddf8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcddf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcddfc: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDDFCu;
    SET_GPR_U32(ctx, 31, 0x1DCDE04u);
    ctx->pc = 0x1DCDE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDDFCu;
    // 0x1dcde00: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDDFCu, 0x1DCDE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDE04u;
label_1dcde04:
    // 0x1dcde04: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcde04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcde08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcde08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcde0c: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDE14u);
    ctx->pc = 0x1DCDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDE0Cu;
    // 0x1dcde10: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDE0Cu, 0x1DCDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDE14u;
label_1dcde14:
    // 0x1dcde14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcde14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcde18:
    // 0x1dcde18: 0xc7736a4  jal         func_1DCDA90
    ctx->pc = 0x1DCDE18u;
    SET_GPR_U32(ctx, 31, 0x1DCDE20u);
    ctx->pc = 0x1DCDA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDA90u, 0x1DCDE18u, 0x1DCDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDE20u;
label_1dcde20:
    // 0x1dcde20: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dcde20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcde24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dcde24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcde28: 0x8e4f081c  lw          $t7, 0x81C($s2)
    ctx->pc = 0x1dcde28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2076)));
    // 0x1dcde2c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dcde2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcde30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcde30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcde34: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCDE34u;
    {
        const bool branch_taken_0x1dcde34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE34u;
        // 0x1dcde38: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcde34) {
            ctx->pc = 0x1DCDE4Cu;
            goto label_1dcde4c;
        }
    }
    ctx->pc = 0x1DCDE3Cu;
    // 0x1dcde3c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcde3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcde40: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1dcde40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcde44: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1dcde44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcde48: 0xadae0cd8  sw          $t6, 0xCD8($t5)
    ctx->pc = 0x1dcde48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 14));
label_1dcde4c:
    // 0x1dcde4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcde4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcde50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcde50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcde54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcde54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcde58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dcde58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcde5c: 0x8773618  j           func_1DCD860
    ctx->pc = 0x1DCDE5Cu;
    ctx->pc = 0x1DCDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDE5Cu;
    // 0x1dcde60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD860u;
    sub_01DCD860_0x1dcd860(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCDE64u;
    // 0x1dcde64: 0x0  nop
    ctx->pc = 0x1dcde64u;
    // NOP
    ctx->pc = 0x1dcde68u;
}
