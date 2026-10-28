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

// Function: sub_01DE7018
// Address: 0x1de7018 - 0x1de7108
void sub_01DE7018_0x1de7018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE7018_0x1de7018");
#endif

    switch (ctx->pc) {
        case 0x1de701cu: goto label_1de701c;
        case 0x1de7048u: goto label_1de7048;
        case 0x1de7058u: goto label_1de7058;
        case 0x1de70d8u: goto label_1de70d8;
        default: break;
    }

    ctx->pc = 0x1de7018u;

    // 0x1de7018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1de7018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1de701c:
    // 0x1de701c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1DE701Cu;
    {
        const bool branch_taken_0x1de701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE701Cu;
        // 0x1de7020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de701c) {
            ctx->pc = 0x1DE7010u;
            return;
        }
    }
    ctx->pc = 0x1DE7024u;
    // 0x1de7024: 0x0  nop
    ctx->pc = 0x1de7024u;
    // NOP
    // 0x1de7028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de7028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de702c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de702cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de7030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de7034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de7034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de7038: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de7038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de703c: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de703cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de7040: 0xc779b88  jal         func_1DE6E20
    ctx->pc = 0x1DE7040u;
    SET_GPR_U32(ctx, 31, 0x1DE7048u);
    ctx->pc = 0x1DE7044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7040u;
    // 0x1de7044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E20u, 0x1DE7040u, 0x1DE7048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7048u;
label_1de7048:
    // 0x1de7048: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de7048u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de704c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7050: 0xc779b86  jal         func_1DE6E18
    ctx->pc = 0x1DE7050u;
    SET_GPR_U32(ctx, 31, 0x1DE7058u);
    ctx->pc = 0x1DE7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7050u;
    // 0x1de7054: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E18u, 0x1DE7050u, 0x1DE7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7058u;
label_1de7058:
    // 0x1de7058: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1de7058u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de705c: 0x91af0432  lbu         $t7, 0x432($t5)
    ctx->pc = 0x1de705cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
    // 0x1de7060: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE7060u;
    {
        const bool branch_taken_0x1de7060 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7060u;
        // 0x1de7064: 0x91af0433  lbu         $t7, 0x433($t5) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1075)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7060) {
            ctx->pc = 0x1DE70B8u;
            goto label_1de70b8;
        }
    }
    ctx->pc = 0x1DE7068u;
    // 0x1de7068: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE7068u;
    {
        const bool branch_taken_0x1de7068 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de7068) {
            ctx->pc = 0x1DE706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7068u;
            // 0x1de706c: 0xa1a002b3  sb          $zero, 0x2B3($t5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 13), 691), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7084u;
            goto label_1de7084;
        }
    }
    ctx->pc = 0x1DE7070u;
    // 0x1de7070: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de7070u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7074: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x1de7074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de7078: 0xa1ae02b3  sb          $t6, 0x2B3($t5)
    ctx->pc = 0x1de7078u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 691), (uint8_t)GPR_U32(ctx, 14));
    // 0x1de707c: 0xadaf0528  sw          $t7, 0x528($t5)
    ctx->pc = 0x1de707cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1320), GPR_U32(ctx, 15));
    // 0x1de7080: 0xa1ae0430  sb          $t6, 0x430($t5)
    ctx->pc = 0x1de7080u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1072), (uint8_t)GPR_U32(ctx, 14));
label_1de7084:
    // 0x1de7084: 0x240f4000  addiu       $t7, $zero, 0x4000
    ctx->pc = 0x1de7084u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1de7088: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1de7088u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de708c: 0xadaf0290  sw          $t7, 0x290($t5)
    ctx->pc = 0x1de708cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 656), GPR_U32(ctx, 15));
    // 0x1de7090: 0x240e0800  addiu       $t6, $zero, 0x800
    ctx->pc = 0x1de7090u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1de7094: 0xadae029c  sw          $t6, 0x29C($t5)
    ctx->pc = 0x1de7094u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 668), GPR_U32(ctx, 14));
    // 0x1de7098: 0xa5ac0442  sh          $t4, 0x442($t5)
    ctx->pc = 0x1de7098u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1090), (uint16_t)GPR_U32(ctx, 12));
    // 0x1de709c: 0xa5ac0444  sh          $t4, 0x444($t5)
    ctx->pc = 0x1de709cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1092), (uint16_t)GPR_U32(ctx, 12));
    // 0x1de70a0: 0xa5ac0446  sh          $t4, 0x446($t5)
    ctx->pc = 0x1de70a0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1094), (uint16_t)GPR_U32(ctx, 12));
    // 0x1de70a4: 0xa5ac0448  sh          $t4, 0x448($t5)
    ctx->pc = 0x1de70a4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1096), (uint16_t)GPR_U32(ctx, 12));
    // 0x1de70a8: 0x91af0434  lbu         $t7, 0x434($t5)
    ctx->pc = 0x1de70a8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1076)));
    // 0x1de70ac: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE70ACu;
    {
        const bool branch_taken_0x1de70ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de70ac) {
            ctx->pc = 0x1DE70B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE70ACu;
            // 0x1de70b0: 0xa5ac03f6  sh          $t4, 0x3F6($t5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 13), 1014), (uint16_t)GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE70B4u;
            goto label_1de70b4;
        }
    }
    ctx->pc = 0x1DE70B4u;
label_1de70b4:
    // 0x1de70b4: 0x91af0433  lbu         $t7, 0x433($t5)
    ctx->pc = 0x1de70b4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1075)));
label_1de70b8:
    // 0x1de70b8: 0x51e0000f  beql        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1DE70B8u;
    {
        const bool branch_taken_0x1de70b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de70b8) {
            ctx->pc = 0x1DE70BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE70B8u;
            // 0x1de70bc: 0xaf808018  sw          $zero, -0x7FE8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE70F8u;
            goto label_1de70f8;
        }
    }
    ctx->pc = 0x1DE70C0u;
    // 0x1de70c0: 0x8dae05a0  lw          $t6, 0x5A0($t5)
    ctx->pc = 0x1de70c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1440)));
    // 0x1de70c4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1de70c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de70c8: 0x51cf000b  beql        $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE70C8u;
    {
        const bool branch_taken_0x1de70c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x1de70c8) {
            ctx->pc = 0x1DE70CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE70C8u;
            // 0x1de70cc: 0xaf808018  sw          $zero, -0x7FE8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE70F8u;
            goto label_1de70f8;
        }
    }
    ctx->pc = 0x1DE70D0u;
    // 0x1de70d0: 0x25af03fa  addiu       $t7, $t5, 0x3FA
    ctx->pc = 0x1de70d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1018));
    // 0x1de70d4: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1de70d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de70d8:
    // 0x1de70d8: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x1de70d8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de70dc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1de70dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1de70e0: 0x0  nop
    ctx->pc = 0x1de70e0u;
    // NOP
    // 0x1de70e4: 0x0  nop
    ctx->pc = 0x1de70e4u;
    // NOP
    // 0x1de70e8: 0x0  nop
    ctx->pc = 0x1de70e8u;
    // NOP
    // 0x1de70ec: 0x5c1fffa  bgez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DE70ECu;
    {
        const bool branch_taken_0x1de70ec = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x1DE70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE70ECu;
        // 0x1de70f0: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de70ec) {
            ctx->pc = 0x1DE70D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de70d8;
        }
    }
    ctx->pc = 0x1DE70F4u;
    // 0x1de70f4: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de70f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
label_1de70f8:
    // 0x1de70f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de70f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de70fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de70fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de7100: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7100u;
        // 0x1de7104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7108u;
}
