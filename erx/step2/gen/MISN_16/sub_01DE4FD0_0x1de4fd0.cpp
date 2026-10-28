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

// Function: sub_01DE4FD0
// Address: 0x1de4fd0 - 0x1de5148
void sub_01DE4FD0_0x1de4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4FD0_0x1de4fd0");
#endif

    switch (ctx->pc) {
        case 0x1de4ff4u: goto label_1de4ff4;
        case 0x1de5008u: goto label_1de5008;
        case 0x1de503cu: goto label_1de503c;
        case 0x1de5130u: goto label_1de5130;
        default: break;
    }

    ctx->pc = 0x1de4fd0u;

    // 0x1de4fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de4fd4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de4fdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de4fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de4fe4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de4fe8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de4fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de4fec: 0xc779386  jal         func_1DE4E18
    ctx->pc = 0x1DE4FECu;
    SET_GPR_U32(ctx, 31, 0x1DE4FF4u);
    ctx->pc = 0x1DE4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4FECu;
    // 0x1de4ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E18u, 0x1DE4FECu, 0x1DE4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4FF4u;
label_1de4ff4:
    // 0x1de4ff4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de4ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de4ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5000: 0xc77938a  jal         func_1DE4E28
    ctx->pc = 0x1DE5000u;
    SET_GPR_U32(ctx, 31, 0x1DE5008u);
    ctx->pc = 0x1DE5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5000u;
    // 0x1de5004: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E28u, 0x1DE5000u, 0x1DE5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5008u;
label_1de5008:
    // 0x1de5008: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1de5008u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1de500c: 0x29ef00ff  slti        $t7, $t7, 0xFF
    ctx->pc = 0x1de500cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1de5010: 0x55e0000b  bnel        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE5010u;
    {
        const bool branch_taken_0x1de5010 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de5010) {
            ctx->pc = 0x1DE5014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE5010u;
            // 0x1de5014: 0x8e2e03a4  lw          $t6, 0x3A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE5040u;
            goto label_1de5040;
        }
    }
    ctx->pc = 0x1DE5018u;
    // 0x1de5018: 0x904f0021  lbu         $t7, 0x21($v0)
    ctx->pc = 0x1de5018u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x1de501c: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE501Cu;
    {
        const bool branch_taken_0x1de501c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de501c) {
            ctx->pc = 0x1DE5020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE501Cu;
            // 0x1de5020: 0x8e2e03a4  lw          $t6, 0x3A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE5040u;
            goto label_1de5040;
        }
    }
    ctx->pc = 0x1DE5024u;
    // 0x1de5024: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5024u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5028: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1de5028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1de502c: 0xac400818  sw          $zero, 0x818($v0)
    ctx->pc = 0x1de502cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2072), GPR_U32(ctx, 0));
    // 0x1de5030: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de5030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de5034: 0xc77939a  jal         func_1DE4E68
    ctx->pc = 0x1DE5034u;
    SET_GPR_U32(ctx, 31, 0x1DE503Cu);
    ctx->pc = 0x1DE5038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5034u;
    // 0x1de5038: 0x248408c8  addiu       $a0, $a0, 0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E68u, 0x1DE5034u, 0x1DE503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE503Cu;
label_1de503c:
    // 0x1de503c: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1de503cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
label_1de5040:
    // 0x1de5040: 0x240f009d  addiu       $t7, $zero, 0x9D
    ctx->pc = 0x1de5040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1de5044: 0x15cf0038  bne         $t6, $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x1DE5044u;
    {
        const bool branch_taken_0x1de5044 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5044u;
        // 0x1de5048: 0x3c0401de  lui         $a0, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5044) {
            ctx->pc = 0x1DE5128u;
            goto label_1de5128;
        }
    }
    ctx->pc = 0x1DE504Cu;
    // 0x1de504c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de504cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5050: 0x3c0a0007  lui         $t2, 0x7
    ctx->pc = 0x1de5050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7 << 16));
    // 0x1de5054: 0x3c0b0002  lui         $t3, 0x2
    ctx->pc = 0x1de5054u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2 << 16));
    // 0x1de5058: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de5058u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de505c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1de505cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1de5060: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de5060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de5064: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de5064u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de5068: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de5068u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de506c: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de506cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de5070: 0xa1a00066  sb          $zero, 0x66($t5)
    ctx->pc = 0x1de5070u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de5074: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5078: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de5078u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de507c: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de507cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de5080: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de5080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de5084: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de5084u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de5088: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de5088u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de508c: 0xa1a003f6  sb          $zero, 0x3F6($t5)
    ctx->pc = 0x1de508cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1014), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de5090: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5094: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de5094u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de5098: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de5098u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de509c: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de509cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de50a0: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de50a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de50a4: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de50a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de50a8: 0xa1a00786  sb          $zero, 0x786($t5)
    ctx->pc = 0x1de50a8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1926), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de50ac: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de50acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de50b0: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de50b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de50b4: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de50b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de50b8: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de50b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de50bc: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de50bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de50c0: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de50c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de50c4: 0xa1a00b16  sb          $zero, 0xB16($t5)
    ctx->pc = 0x1de50c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2838), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de50c8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de50c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de50cc: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de50ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de50d0: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de50d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de50d4: 0x8dac002c  lw          $t4, 0x2C($t5)
    ctx->pc = 0x1de50d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de50d8: 0x8d8e001c  lw          $t6, 0x1C($t4)
    ctx->pc = 0x1de50d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x1de50dc: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1de50dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1de50e0: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x1de50e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x1de50e4: 0xa1e04796  sb          $zero, 0x4796($t7)
    ctx->pc = 0x1de50e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 18326), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de50e8: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de50e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de50ec: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de50ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de50f0: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de50f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de50f4: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de50f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de50f8: 0x8dcc001c  lw          $t4, 0x1C($t6)
    ctx->pc = 0x1de50f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de50fc: 0x8d8f0048  lw          $t7, 0x48($t4)
    ctx->pc = 0x1de50fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1de5100: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1de5100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1de5104: 0xa1e06c86  sb          $zero, 0x6C86($t7)
    ctx->pc = 0x1de5104u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 27782), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de5108: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de5108u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de510c: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de510cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de5110: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de5110u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de5114: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de5114u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de5118: 0x8dcc001c  lw          $t4, 0x1C($t6)
    ctx->pc = 0x1de5118u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de511c: 0x8d8f0048  lw          $t7, 0x48($t4)
    ctx->pc = 0x1de511cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1de5120: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x1de5120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x1de5124: 0xa1e04b26  sb          $zero, 0x4B26($t7)
    ctx->pc = 0x1de5124u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 19238), (uint8_t)GPR_U32(ctx, 0));
label_1de5128:
    // 0x1de5128: 0xc7793a6  jal         func_1DE4E98
    ctx->pc = 0x1DE5128u;
    SET_GPR_U32(ctx, 31, 0x1DE5130u);
    ctx->pc = 0x1DE512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5128u;
    // 0x1de512c: 0x24845630  addiu       $a0, $a0, 0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E98u, 0x1DE5128u, 0x1DE5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5130u;
label_1de5130:
    // 0x1de5130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de5130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de5134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de5138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de5138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de513c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE513Cu;
        // 0x1de5140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE513Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5144u;
    // 0x1de5144: 0x0  nop
    ctx->pc = 0x1de5144u;
    // NOP
    ctx->pc = 0x1de5148u;
}
