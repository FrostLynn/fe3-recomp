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

// Function: sub_01DA8540
// Address: 0x1da8540 - 0x1da8640
void sub_01DA8540_0x1da8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8540_0x1da8540");
#endif

    switch (ctx->pc) {
        case 0x1da8564u: goto label_1da8564;
        case 0x1da85f4u: goto label_1da85f4;
        default: break;
    }

    ctx->pc = 0x1da8540u;

    // 0x1da8540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da8540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da8544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da8548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da854c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da8550: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1da8550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8554: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1da8554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8558: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da8558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da855c: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA855Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8564u);
    ctx->pc = 0x1DA8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA855Cu;
    // 0x1da8560: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA855Cu, 0x1DA8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8564u;
label_1da8564:
    // 0x1da8564: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1da8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8568: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1da8568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1da856c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1da856cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1da8570: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8574: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x1da8574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x1da8578: 0xae2f01ec  sw          $t7, 0x1EC($s1)
    ctx->pc = 0x1da8578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 15));
    // 0x1da857c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1da857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8580: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x1da8580u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1da8584: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1da8584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1da8588: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1da8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
    // 0x1da858c: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1da858cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1da8590: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1da8590u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da8594: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1da8594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8598: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1da8598u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1da859c: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x1da859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x1da85a0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1da85a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1da85a4: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1da85a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da85a8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1da85a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da85ac: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1da85acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1da85b0: 0xae2b01e8  sw          $t3, 0x1E8($s1)
    ctx->pc = 0x1da85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 11));
    // 0x1da85b4: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1da85b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1da85b8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1da85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da85bc: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1da85bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1da85c0: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x1da85c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x1da85c4: 0x8c4e00b4  lw          $t6, 0xB4($v0)
    ctx->pc = 0x1da85c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1da85c8: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1da85c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1da85cc: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1da85ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da85d0: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1da85d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1da85d4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1da85d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da85d8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1da85d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1da85dc: 0xae2f01e0  sw          $t7, 0x1E0($s1)
    ctx->pc = 0x1da85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 15));
    // 0x1da85e0: 0xae2e01e4  sw          $t6, 0x1E4($s1)
    ctx->pc = 0x1da85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 14));
    // 0x1da85e4: 0xae2d01f4  sw          $t5, 0x1F4($s1)
    ctx->pc = 0x1da85e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 13));
    // 0x1da85e8: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA85E8u;
    {
        const bool branch_taken_0x1da85e8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1DA85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA85E8u;
        // 0x1da85ec: 0xe6200208  swc1        $f0, 0x208($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da85e8) {
            ctx->pc = 0x1DA862Cu;
            goto label_1da862c;
        }
    }
    ctx->pc = 0x1DA85F0u;
    // 0x1da85f0: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1da85f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1da85f4:
    // 0x1da85f4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1da85f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1da85f8: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1da85f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1da85fc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1da85fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1da8600: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1da8600u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1da8604: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1da8604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1da8608: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1da8608u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1da860c: 0xaded0210  sw          $t5, 0x210($t7)
    ctx->pc = 0x1da860cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 528), GPR_U32(ctx, 13));
    // 0x1da8610: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1da8610u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1da8614: 0xadee0214  sw          $t6, 0x214($t7)
    ctx->pc = 0x1da8614u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 532), GPR_U32(ctx, 14));
    // 0x1da8618: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1da8618u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1da861c: 0xaded0218  sw          $t5, 0x218($t7)
    ctx->pc = 0x1da861cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 536), GPR_U32(ctx, 13));
    // 0x1da8620: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1da8620u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1da8624: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DA8624u;
    {
        const bool branch_taken_0x1da8624 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8624u;
        // 0x1da8628: 0xadee021c  sw          $t6, 0x21C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 540), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8624) {
            ctx->pc = 0x1DA85F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da85f4;
        }
    }
    ctx->pc = 0x1DA862Cu;
label_1da862c:
    // 0x1da862c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da862cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da8630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da8634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8638: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8638u;
        // 0x1da863c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8640u;
}
