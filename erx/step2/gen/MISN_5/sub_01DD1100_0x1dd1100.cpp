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

// Function: sub_01DD1100
// Address: 0x1dd1100 - 0x1dd11ec
void sub_01DD1100_0x1dd1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD1100_0x1dd1100");
#endif

    switch (ctx->pc) {
        case 0x1dd1120u: goto label_1dd1120;
        default: break;
    }

    ctx->pc = 0x1dd1100u;

    // 0x1dd1100: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dd1100u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dd1104: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DD1104u;
    {
        const bool branch_taken_0x1dd1104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1104u;
        // 0x1dd1108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1104) {
            ctx->pc = 0x1DD11CCu;
            goto label_1dd11cc;
        }
    }
    ctx->pc = 0x1DD110Cu;
    // 0x1dd110c: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd110cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd1110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd1110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd1114: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd1114u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd1118: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd1118u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd111c: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd111cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd1120:
    // 0x1dd1120: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dd1120u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dd1124: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD1124u;
    {
        const bool branch_taken_0x1dd1124 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1124) {
            ctx->pc = 0x1DD1128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD1124u;
            // 0x1dd1128: 0x8f8e801c  lw          $t6, -0x7FE4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD1140u;
            goto label_1dd1140;
        }
    }
    ctx->pc = 0x1DD112Cu;
    // 0x1dd112c: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd112cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd1130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd1130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd1134: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd1134u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd1138: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd1138u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd113c: 0x8f8e801c  lw          $t6, -0x7FE4($gp)
    ctx->pc = 0x1dd113cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
label_1dd1140:
    // 0x1dd1140: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x1dd1140u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1dd1144: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x1dd1144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x1dd1148: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD1148u;
    {
        const bool branch_taken_0x1dd1148 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1148u;
        // 0x1dd114c: 0x31ce001e  andi        $t6, $t6, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1148) {
            ctx->pc = 0x1DD117Cu;
            goto label_1dd117c;
        }
    }
    ctx->pc = 0x1DD1150u;
    // 0x1dd1150: 0x240f001e  addiu       $t7, $zero, 0x1E
    ctx->pc = 0x1dd1150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dd1154: 0x55cf000a  bnel        $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD1154u;
    {
        const bool branch_taken_0x1dd1154 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd1154) {
            ctx->pc = 0x1DD1158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD1154u;
            // 0x1dd1158: 0x95ad056e  lhu         $t5, 0x56E($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD1180u;
            goto label_1dd1180;
        }
    }
    ctx->pc = 0x1DD115Cu;
    // 0x1dd115c: 0x8dae01e4  lw          $t6, 0x1E4($t5)
    ctx->pc = 0x1dd115cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 484)));
    // 0x1dd1160: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x1dd1160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dd1164: 0x55cf0006  bnel        $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD1164u;
    {
        const bool branch_taken_0x1dd1164 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd1164) {
            ctx->pc = 0x1DD1168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD1164u;
            // 0x1dd1168: 0x95ad056e  lhu         $t5, 0x56E($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD1180u;
            goto label_1dd1180;
        }
    }
    ctx->pc = 0x1DD116Cu;
    // 0x1dd116c: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd116cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd1170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd1174: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1dd1174u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1dd1178: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd1178u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd117c:
    // 0x1dd117c: 0x95ad056e  lhu         $t5, 0x56E($t5)
    ctx->pc = 0x1dd117cu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
label_1dd1180:
    // 0x1dd1180: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1dd1180u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd1184: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x1dd1184u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x1dd1188: 0x31ac0020  andi        $t4, $t5, 0x20
    ctx->pc = 0x1dd1188u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1dd118c: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1dd118cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dd1190: 0x31ab0040  andi        $t3, $t5, 0x40
    ctx->pc = 0x1dd1190u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x1dd1194: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dd1194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd1198: 0x31aa0080  andi        $t2, $t5, 0x80
    ctx->pc = 0x1dd1198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)128);
    // 0x1dd119c: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1dd119cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1dd11a0: 0x31a90100  andi        $t1, $t5, 0x100
    ctx->pc = 0x1dd11a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)256);
    // 0x1dd11a4: 0x244e0002  addiu       $t6, $v0, 0x2
    ctx->pc = 0x1dd11a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1dd11a8: 0x31ad0200  andi        $t5, $t5, 0x200
    ctx->pc = 0x1dd11a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)512);
    // 0x1dd11ac: 0x1cb100b  movn        $v0, $t6, $t3
    ctx->pc = 0x1dd11acu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dd11b0: 0x244f0003  addiu       $t7, $v0, 0x3
    ctx->pc = 0x1dd11b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1dd11b4: 0x1ea100b  movn        $v0, $t7, $t2
    ctx->pc = 0x1dd11b4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1dd11b8: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1dd11b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dd11bc: 0x1c9100b  movn        $v0, $t6, $t1
    ctx->pc = 0x1dd11bcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dd11c0: 0x244f0005  addiu       $t7, $v0, 0x5
    ctx->pc = 0x1dd11c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1dd11c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD11C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD11C4u;
        // 0x1dd11c8: 0x1ed100b  movn        $v0, $t7, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD11C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD11CCu;
label_1dd11cc:
    // 0x1dd11cc: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1DD11CCu;
    {
        const bool branch_taken_0x1dd11cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD11CCu;
        // 0x1dd11d0: 0x8f8d8014  lw          $t5, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd11cc) {
            ctx->pc = 0x1DD1120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1120;
        }
    }
    ctx->pc = 0x1DD11D4u;
    // 0x1dd11d4: 0x0  nop
    ctx->pc = 0x1dd11d4u;
    // NOP
    // 0x1dd11d8: 0x0  nop
    ctx->pc = 0x1dd11d8u;
    // NOP
    // 0x1dd11dc: 0x0  nop
    ctx->pc = 0x1dd11dcu;
    // NOP
    // 0x1dd11e0: 0x0  nop
    ctx->pc = 0x1dd11e0u;
    // NOP
    // 0x1dd11e4: 0x0  nop
    ctx->pc = 0x1dd11e4u;
    // NOP
    // 0x1dd11e8: 0x0  nop
    ctx->pc = 0x1dd11e8u;
    // NOP
    ctx->pc = 0x1dd11ecu;
}
