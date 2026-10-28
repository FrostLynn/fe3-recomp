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

// Function: sub_01C6A948
// Address: 0x1c6a948 - 0x1c6aa58
void sub_01C6A948_0x1c6a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A948_0x1c6a948");
#endif

    switch (ctx->pc) {
        case 0x1c6a964u: goto label_1c6a964;
        case 0x1c6a96cu: goto label_1c6a96c;
        case 0x1c6a980u: goto label_1c6a980;
        case 0x1c6a984u: goto label_1c6a984;
        case 0x1c6a9dcu: goto label_1c6a9dc;
        case 0x1c6a9ecu: goto label_1c6a9ec;
        case 0x1c6aa00u: goto label_1c6aa00;
        case 0x1c6aa14u: goto label_1c6aa14;
        case 0x1c6aa24u: goto label_1c6aa24;
        default: break;
    }

    ctx->pc = 0x1c6a948u;

    // 0x1c6a948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6a94c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6a94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6a950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6a954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6a95c: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6A95Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A964u);
    ctx->pc = 0x1C6A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A95Cu;
    // 0x1c6a960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6A95Cu, 0x1C6A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A964u;
label_1c6a964:
    // 0x1c6a964: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6A964u;
    SET_GPR_U32(ctx, 31, 0x1C6A96Cu);
    ctx->pc = 0x1C6A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A964u;
    // 0x1c6a968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6A964u, 0x1C6A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A96Cu;
label_1c6a96c:
    // 0x1c6a96c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6a96cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a970: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6A970u;
    {
        const bool branch_taken_0x1c6a970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A970u;
        // 0x1c6a974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a970) {
            ctx->pc = 0x1C6A994u;
            goto label_1c6a994;
        }
    }
    ctx->pc = 0x1C6A978u;
    // 0x1c6a978: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6A978u;
    SET_GPR_U32(ctx, 31, 0x1C6A980u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6A978u, 0x1C6A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A980u;
label_1c6a980:
    // 0x1c6a980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6a984:
    // 0x1c6a984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6a984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a988: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6a98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A98Cu;
        // 0x1c6a990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A994u;
label_1c6a994:
    // 0x1c6a994: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6A994u;
    {
        const bool branch_taken_0x1c6a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A994u;
        // 0x1c6a998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a994) {
            ctx->pc = 0x1C6A984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6a984;
        }
    }
    ctx->pc = 0x1C6A99Cu;
    // 0x1c6a99c: 0x0  nop
    ctx->pc = 0x1c6a99cu;
    // NOP
    // 0x1c6a9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6a9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6a9a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c6a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c6a9ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c6a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c6a9b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6a9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6a9b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c6a9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6a9c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6a9c4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c6a9c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c6a9c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c6a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c6a9cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6a9d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c6a9d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9d4: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6A9D4u;
    SET_GPR_U32(ctx, 31, 0x1C6A9DCu);
    ctx->pc = 0x1C6A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A9D4u;
    // 0x1c6a9d8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6A9D4u, 0x1C6A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A9DCu;
label_1c6a9dc:
    // 0x1c6a9dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6a9e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6a9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9e4: 0xc71a79a  jal         func_1C69E68
    ctx->pc = 0x1C6A9E4u;
    SET_GPR_U32(ctx, 31, 0x1C6A9ECu);
    ctx->pc = 0x1C6A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A9E4u;
    // 0x1c6a9e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E68u, 0x1C6A9E4u, 0x1C6A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A9ECu;
label_1c6a9ec:
    // 0x1c6a9ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6a9f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6a9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9f8: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6A9F8u;
    SET_GPR_U32(ctx, 31, 0x1C6AA00u);
    ctx->pc = 0x1C6A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A9F8u;
    // 0x1c6a9fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6A9F8u, 0x1C6AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA00u;
label_1c6aa00:
    // 0x1c6aa00: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c6aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c6aa04: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c6aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c6aa08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c6aa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa0c: 0xc71a79e  jal         func_1C69E78
    ctx->pc = 0x1C6AA0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AA14u);
    ctx->pc = 0x1C6AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0Cu;
    // 0x1c6aa10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E78u, 0x1C6AA0Cu, 0x1C6AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA14u;
label_1c6aa14:
    // 0x1c6aa14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6aa14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6aa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa1c: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6AA1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AA24u);
    ctx->pc = 0x1C6AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA1Cu;
    // 0x1c6aa20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6AA1Cu, 0x1C6AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA24u;
label_1c6aa24:
    // 0x1c6aa24: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c6aa24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c6aa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6aa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6aa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6aa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6aa34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6aa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6aa38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6aa38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6aa3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6aa3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6aa40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6aa40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6aa44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c6aa44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6aa48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c6aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6aa4c: 0x871a7a0  j           func_1C69E80
    ctx->pc = 0x1C6AA4Cu;
    ctx->pc = 0x1C6AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA4Cu;
    // 0x1c6aa50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E80u;
    sub_01C69E80_0x1c69e80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6AA54u;
    // 0x1c6aa54: 0x0  nop
    ctx->pc = 0x1c6aa54u;
    // NOP
    ctx->pc = 0x1c6aa58u;
}
