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

// Function: sub_01DD8588
// Address: 0x1dd8588 - 0x1dd86a8
void sub_01DD8588_0x1dd8588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8588_0x1dd8588");
#endif

    switch (ctx->pc) {
        case 0x1dd85b4u: goto label_1dd85b4;
        case 0x1dd85c8u: goto label_1dd85c8;
        case 0x1dd85d0u: goto label_1dd85d0;
        case 0x1dd8630u: goto label_1dd8630;
        case 0x1dd8648u: goto label_1dd8648;
        case 0x1dd8668u: goto label_1dd8668;
        case 0x1dd8678u: goto label_1dd8678;
        default: break;
    }

    ctx->pc = 0x1dd8588u;

    // 0x1dd8588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd8588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd858c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd858cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd8590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd8590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd8594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd8594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd8598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd8598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd859c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd85a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd85a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd85a4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd85a8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd85a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd85ac: 0xc7760ca  jal         func_1DD8328
    ctx->pc = 0x1DD85ACu;
    SET_GPR_U32(ctx, 31, 0x1DD85B4u);
    ctx->pc = 0x1DD85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD85ACu;
    // 0x1dd85b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8328u, 0x1DD85ACu, 0x1DD85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD85B4u;
label_1dd85b4:
    // 0x1dd85b4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd85b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd85b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd85b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd85bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd85bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd85c0: 0xc7760ce  jal         func_1DD8338
    ctx->pc = 0x1DD85C0u;
    SET_GPR_U32(ctx, 31, 0x1DD85C8u);
    ctx->pc = 0x1DD85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD85C0u;
    // 0x1dd85c4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8338u, 0x1DD85C0u, 0x1DD85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD85C8u;
label_1dd85c8:
    // 0x1dd85c8: 0xc776126  jal         func_1DD8498
    ctx->pc = 0x1DD85C8u;
    SET_GPR_U32(ctx, 31, 0x1DD85D0u);
    ctx->pc = 0x1DD85CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD85C8u;
    // 0x1dd85cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8498u, 0x1DD85C8u, 0x1DD85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD85D0u;
label_1dd85d0:
    // 0x1dd85d0: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1dd85d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1dd85d4: 0x240e017a  addiu       $t6, $zero, 0x17A
    ctx->pc = 0x1dd85d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 378));
    // 0x1dd85d8: 0x8ded4888  lw          $t5, 0x4888($t7)
    ctx->pc = 0x1dd85d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18568)));
    // 0x1dd85dc: 0x15ae0004  bne         $t5, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD85DCu;
    {
        const bool branch_taken_0x1dd85dc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1DD85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD85DCu;
        // 0x1dd85e0: 0x26500390  addiu       $s0, $s2, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd85dc) {
            ctx->pc = 0x1DD85F0u;
            goto label_1dd85f0;
        }
    }
    ctx->pc = 0x1DD85E4u;
    // 0x1dd85e4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd85e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd85e8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd85e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd85ec: 0xa1ee0429  sb          $t6, 0x429($t7)
    ctx->pc = 0x1dd85ecu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1065), (uint8_t)GPR_U32(ctx, 14));
label_1dd85f0:
    // 0x1dd85f0: 0x240f014f  addiu       $t7, $zero, 0x14F
    ctx->pc = 0x1dd85f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x1dd85f4: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x1dd85f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd85f8: 0x11cf001f  beq         $t6, $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DD85F8u;
    {
        const bool branch_taken_0x1dd85f8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD85F8u;
        // 0x1dd85fc: 0x240f0042  addiu       $t7, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd85f8) {
            ctx->pc = 0x1DD8678u;
            goto label_1dd8678;
        }
    }
    ctx->pc = 0x1DD8600u;
    // 0x1dd8600: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1dd8600u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1dd8604: 0x15cf001d  bne         $t6, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DD8604u;
    {
        const bool branch_taken_0x1dd8604 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8604u;
        // 0x1dd8608: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8604) {
            ctx->pc = 0x1DD867Cu;
            goto label_1dd867c;
        }
    }
    ctx->pc = 0x1DD860Cu;
    // 0x1dd860c: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1dd860cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1dd8610: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DD8610u;
    {
        const bool branch_taken_0x1dd8610 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8610u;
        // 0x1dd8614: 0x2405fac8  addiu       $a1, $zero, -0x538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8610) {
            ctx->pc = 0x1DD8680u;
            goto label_1dd8680;
        }
    }
    ctx->pc = 0x1DD8618u;
    // 0x1dd8618: 0x26330c70  addiu       $s3, $s1, 0xC70
    ctx->pc = 0x1dd8618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3184));
    // 0x1dd861c: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x1dd861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1dd8620: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD8620u;
    {
        const bool branch_taken_0x1dd8620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8620) {
            ctx->pc = 0x1DD8624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD8620u;
            // 0x1dd8624: 0x92620064  lbu         $v0, 0x64($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8630u;
            goto label_1dd8630;
        }
    }
    ctx->pc = 0x1DD8628u;
    // 0x1dd8628: 0xc77620a  jal         func_1DD8828
    ctx->pc = 0x1DD8628u;
    SET_GPR_U32(ctx, 31, 0x1DD8630u);
    ctx->pc = 0x1DD8828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8828u, 0x1DD8628u, 0x1DD8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8630u;
label_1dd8630:
    // 0x1dd8630: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x1dd8630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd8634: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD8634u;
    {
        const bool branch_taken_0x1dd8634 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8634u;
        // 0x1dd8638: 0x264403e4  addiu       $a0, $s2, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8634) {
            ctx->pc = 0x1DD8678u;
            goto label_1dd8678;
        }
    }
    ctx->pc = 0x1DD863Cu;
    // 0x1dd863c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1dd863cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1dd8640: 0xc7760d8  jal         func_1DD8360
    ctx->pc = 0x1DD8640u;
    SET_GPR_U32(ctx, 31, 0x1DD8648u);
    ctx->pc = 0x1DD8644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8640u;
    // 0x1dd8644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8360u, 0x1DD8640u, 0x1DD8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8648u;
label_1dd8648:
    // 0x1dd8648: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1dd8648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dd864c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD864Cu;
    {
        const bool branch_taken_0x1dd864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD864Cu;
        // 0x1dd8650: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd864c) {
            ctx->pc = 0x1DD867Cu;
            goto label_1dd867c;
        }
    }
    ctx->pc = 0x1DD8654u;
    // 0x1dd8654: 0x922f09b0  lbu         $t7, 0x9B0($s1)
    ctx->pc = 0x1dd8654u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x1dd8658: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD8658u;
    {
        const bool branch_taken_0x1dd8658 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8658u;
        // 0x1dd865c: 0x2405fac8  addiu       $a1, $zero, -0x538 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8658) {
            ctx->pc = 0x1DD8680u;
            goto label_1dd8680;
        }
    }
    ctx->pc = 0x1DD8660u;
    // 0x1dd8660: 0xc7760de  jal         func_1DD8378
    ctx->pc = 0x1DD8660u;
    SET_GPR_U32(ctx, 31, 0x1DD8668u);
    ctx->pc = 0x1DD8664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8660u;
    // 0x1dd8664: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8378u, 0x1DD8660u, 0x1DD8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8668u;
label_1dd8668:
    // 0x1dd8668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd8668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd866c: 0x2405014f  addiu       $a1, $zero, 0x14F
    ctx->pc = 0x1dd866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x1dd8670: 0xc7760c8  jal         func_1DD8320
    ctx->pc = 0x1DD8670u;
    SET_GPR_U32(ctx, 31, 0x1DD8678u);
    ctx->pc = 0x1DD8674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8670u;
    // 0x1dd8674: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8320u, 0x1DD8670u, 0x1DD8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8678u;
label_1dd8678:
    // 0x1dd8678: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd867c:
    // 0x1dd867c: 0x2405fac8  addiu       $a1, $zero, -0x538
    ctx->pc = 0x1dd867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965960));
label_1dd8680:
    // 0x1dd8680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd8680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8684: 0x2406fac9  addiu       $a2, $zero, -0x537
    ctx->pc = 0x1dd8684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965961));
    // 0x1dd8688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd8688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd868c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd868cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd8690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd8690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd8694: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd8694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd8698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd8698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd869c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd86a0: 0x87760dc  j           func_1DD8370
    ctx->pc = 0x1DD86A0u;
    ctx->pc = 0x1DD86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD86A0u;
    // 0x1dd86a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8370u;
    sub_01DD8370_0x1dd8370(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD86A8u;
}
