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

// Function: sub_01DCF580
// Address: 0x1dcf580 - 0x1dcf618
void sub_01DCF580_0x1dcf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF580_0x1dcf580");
#endif

    switch (ctx->pc) {
        case 0x1dcf5a4u: goto label_1dcf5a4;
        case 0x1dcf5b8u: goto label_1dcf5b8;
        default: break;
    }

    ctx->pc = 0x1dcf580u;

    // 0x1dcf580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcf580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcf584: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcf588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcf58c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcf58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dcf590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcf590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcf594: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcf594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcf598: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcf598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcf59c: 0xc773d0a  jal         func_1DCF428
    ctx->pc = 0x1DCF59Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF5A4u);
    ctx->pc = 0x1DCF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF59Cu;
    // 0x1dcf5a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF428u, 0x1DCF59Cu, 0x1DCF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF5A4u;
label_1dcf5a4:
    // 0x1dcf5a4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcf5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf5ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf5b0: 0xc773d0e  jal         func_1DCF438
    ctx->pc = 0x1DCF5B0u;
    SET_GPR_U32(ctx, 31, 0x1DCF5B8u);
    ctx->pc = 0x1DCF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF5B0u;
    // 0x1dcf5b4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF438u, 0x1DCF5B0u, 0x1DCF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF5B8u;
label_1dcf5b8:
    // 0x1dcf5b8: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1dcf5b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1dcf5bc: 0x240f0161  addiu       $t7, $zero, 0x161
    ctx->pc = 0x1dcf5bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1dcf5c0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCF5C0u;
    {
        const bool branch_taken_0x1dcf5c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF5C0u;
        // 0x1dcf5c4: 0x8f8d8014  lw          $t5, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf5c0) {
            ctx->pc = 0x1DCF5D4u;
            goto label_1dcf5d4;
        }
    }
    ctx->pc = 0x1DCF5C8u;
    // 0x1dcf5c8: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dcf5c8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dcf5cc: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dcf5ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dcf5d0: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dcf5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dcf5d4:
    // 0x1dcf5d4: 0x91af042a  lbu         $t7, 0x42A($t5)
    ctx->pc = 0x1dcf5d4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1066)));
    // 0x1dcf5d8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCF5D8u;
    {
        const bool branch_taken_0x1dcf5d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF5D8u;
        // 0x1dcf5dc: 0x8f8f801c  lw          $t7, -0x7FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf5d8) {
            ctx->pc = 0x1DCF5ECu;
            goto label_1dcf5ec;
        }
    }
    ctx->pc = 0x1DCF5E0u;
    // 0x1dcf5e0: 0xa1a0042a  sb          $zero, 0x42A($t5)
    ctx->pc = 0x1dcf5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1066), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dcf5e4: 0x25efffe0  addiu       $t7, $t7, -0x20
    ctx->pc = 0x1dcf5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967264));
    // 0x1dcf5e8: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dcf5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dcf5ec:
    // 0x1dcf5ec: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dcf5ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dcf5f0: 0x240f014e  addiu       $t7, $zero, 0x14E
    ctx->pc = 0x1dcf5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dcf5f4: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCF5F4u;
    {
        const bool branch_taken_0x1dcf5f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF5F4u;
        // 0x1dcf5f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf5f4) {
            ctx->pc = 0x1DCF608u;
            goto label_1dcf608;
        }
    }
    ctx->pc = 0x1DCF5FCu;
    // 0x1dcf5fc: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dcf5fcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dcf600: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dcf600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dcf604: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dcf604u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dcf608:
    // 0x1dcf608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcf608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcf60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcf60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcf610: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF610u;
        // 0x1dcf614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF618u;
}
